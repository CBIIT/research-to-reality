<?php
/**
 * @file
 * Migration for player data.
 */

class R2RSeminarMigration extends R2RMigration {

    public function __construct($arguments) {
        parent::__construct($arguments);

        $destType = 'cyber_seminar';
        $sourceType = 'seminar';

        $this->description = t('Import seminars from legacy R2R database.');

        $query = $this->getConnection()
            ->select('node', 'n')
            ->fields('n', array('nid', 'vid', 'language', 'title',
                'uid', 'status', 'created', 'changed', 'comment', 'promote',
                'moderate', 'sticky', 'tnid', 'translate'))
            ->condition('type', $sourceType);
        $query->innerJoin('node_revisions', 'nr', 'n.nid=nr.nid');
        $query->fields('nr', array('body', 'teaser', 'format'));
        $query->innerJoin('content_type_seminar','cts','nr.nid=cts.nid');
        $query->fields('cts', array('field_legacy_seminar_value', 'field_yt_video_id_value', 'field_seminar_teaser_value', 'field_seminar_learning_value', 'field_seminar_state_value', 'field_seminar_related_discussion_nid', 'field_register_url', 'field_watch_link_url', 'field_archive_date_value'));
        $query->innerJoin('content_field_event_date','cfed','cts.nid=cfed.nid');
        $query->fields('cfed', array('field_event_date_value', 'field_event_date_value2', 'field_event_date_timezone', 'field_event_date_offset', 'field_event_date_offset2'));


        // portions of queries below must either be handled in prepare row function on constrained by limiting 'where delta='{0,1,2,3,4}''
        /*
        $query->innerJoin('content_field_seminar_related','cfsr','cts.nid=cfsr.nid');
        $query->fields('cfsr', array('field_seminar_related_fid','field_seminar_related_data
','field_seminar_related_discussion_nid'));

        $query->innerJoin('content_field_related_links','cfrl','cfsr.nid=cfrl.nid');
        $query->fields('cfrl', array('field_related_links_url','field_related_links_title'));



        $query->innerJoin('content_field_cyber_presenters','cfcp','cfed.nid=cfcp.nid');
        $query->fields('cfcp', array('field_cyber_presenters_nid'));
        */

        $this->source = new MigrateSourceSQL($query);

        $node_options = MigrateDestinationNode::options('en', 'full_html');
        $this->destination = new MigrateDestinationNode($destType, $node_options);
        $this->map = new MigrateSQLMap($this->machineName,
            array(
                'nid' => array('type' => 'int',
                    'length' => 10,
                    'unsigned' => TRUE,
                    'not null' => TRUE,
                    'alias' => 'n',
                )
            ),
            MigrateDestinationNode::getKeySchema()
        );

        $this->addSimpleMappings(array('title','body', 'created','changed','status','promote','sticky','revision','log','language','tnid','translate'));
        $this->addFieldMapping('uid', 'uid')->sourceMigration('R2RUsers');
        $this->addFieldMapping('body:summary', 'teaser');
        $this->addFieldMapping('field_related_discussion','field_seminar_related_discussion_nid')->sourceMigration('R2RDiscussions');
        $this->addFieldMapping('field_legacy_seminar','field_legacy_seminar_value');
        $this->addFieldMapping('field_yt_video_id','field_yt_video_id_value');
        $this->addFieldMapping('field_event_date','field_event_date_value');
        $this->addFieldMapping('field_event_date:to','field_event_date_value2');
        $this->addFieldMapping('field_event_date:timezone', 'field_event_date_timezone')->defaultValue("America/New_York");
        $this->addFieldMapping('field_event_date:offset', 'field_event_date_offset');
        $this->addFieldMapping('field_event_date:offset2', 'field_event_date_offset2');
        $this->addFieldMapping('field_seminar_teaser','field_seminar_teaser_value');
        $this->addFieldMapping('field_seminar_learning','field_seminar_learning_value');
        $this->addFieldMapping('field_seminar_state','field_seminar_state_value');
        $this->addFieldMapping('field_register','field_register_url');
        $this->addFieldMapping('field_watch_link','field_watch_link_url');
        $this->addFieldMapping('field_archive_date','field_archive_date_value');
        $this->addFieldMapping('field_related_links','linkArray');//->defaultValue(array('val1','val2','notice delta incrementing!?'));
        //$this->addFieldMapping('field_seminar_related','seminarArray')->sourceMigration('R2RFiles');// TODO : Fix this migration so it imports file data
        //$this->addFieldMapping('field_seminar_related:file_class')->defaultValue('MigrateFileFid');
        $this->addFieldMapping('field_cyber_presenters','presenterArray')->sourceMigration('R2RPresenter');//this is the node reference for the presenter content type



    }
    public function prepareRow($current_row) {
        if (parent::prepareRow($row) === FALSE) {
            return FALSE;
       }
        $nid = $current_row->nid;
        //also the below select on tables:
        //  content_field_seminar_related to get the FID values to plug into the files fieldmapping
        //  content_field_cyber_presenters to get the !!!NID for Presenter content type plug into the presenters fieldmapping
        //or use the same query + foreach to process, but maybe can do this in one query?  worst case doesn't change complexity class (still linear), not that we care but whatever.
        $query = $this->getConnection()->select('content_field_related_links', 't1')
            ->fields('t1', array('field_related_links_url','field_related_links_title','field_related_links_attributes'))
            ->condition('t1.nid', $nid);
        $query->innerJoin('content_field_seminar_related','t2','t1.nid=t2.nid and t1.delta=t2.delta');
        $query->fields('t2', array('field_seminar_related_fid','field_seminar_related_list','field_seminar_related_data'));
        $query->innerJoin('content_field_cyber_presenters','t3','t2.nid=t3.nid and t2.delta=t3.delta');
        $query->fields('t3', array('field_cyber_presenters_nid'));
        $results = $query->execute();
        $current_row->linkArray = $current_row->seminarArray = $current_row->presenterArray = array();
        //$current_row->linkArray = $current_row->presenterArray = array();

        $delta = 0;
        foreach($results as $result_row) {
            $current_row->linkArray[$delta] = $result_row->field_related_links_url;
            $current_row->seminarArray[$delta] = $result_row->field_seminar_related_fid;
            $current_row->presenterArray[$delta] = $result_row->field_cyber_presenters_nid;
            $delta++;
        }
        //$current_row->seminarArray = 526;

        //$current_row->field_archive_date ='testing the prepare row!';
        //$current_row->field_archive_date_value = 'testing 2 3 4';
        //$current_row->field_related_links = 'testing again';
        //$current_row->body = 'this body eh?';

        //this worked with foo mapepd to frl
        //$current_row->foo=array('value1','value2');
        //$current_row->foo=array('key1'=>'value1',$delta,$nid,$related_links_result[0]);
        //$current_row->linkArray=$related_links_result;

        /*$query = db_select('oce_dev_r2r' .'.users_roles', 'r')
          ->fields('r', array('uid', 'rid'))
          ->condition('r.uid', $source_id, '=');
        $results = $query->execute();*/
        return true;
    }
}
/*
select count(*), n.type, t2.delta from node as n inner join content_field_seminar_related as t2 on n.nid = t2.nid where n.type='seminar' group by t2.delta;
select count(*), n.type, t2.delta from node as n inner join content_field_related_links as t2 on n.nid = t2.nid where n.type='seminar' group by t2.delta;
select count(*), n.type, t2.delta from node as n inner join content_field_event_date as t2 on n.nid = t2.nid where n.type='seminar' group by t2.delta;
select count(*), n.type, t2.delta from node as n inner join content_field_cyber_presenters as t2 on n.nid = t2.nid where n.type='seminar' group by t2.delta;
--
select n.type, t2.* from node as n inner join content_field_seminar_related as t2 on n.nid = t2.nid where n.type='seminar' order by t2.delta desc
select n.type, t2.* from node as n inner join content_field_related_links as t2 on n.nid = t2.nid where n.type='seminar' order by t2.delta desc
select n.type, t2.* from node as n inner join content_field_event_date as t2 on n.nid = t2.nid where n.type='seminar' order by t2.delta desc
select n.type, t2.* from node as n inner join content_field_cyber_presenters as t2 on n.nid = t2.nid where n.type='seminar' order by t2.delta desc
*/
