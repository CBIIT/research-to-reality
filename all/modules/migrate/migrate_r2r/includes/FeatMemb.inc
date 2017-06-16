<?php
class R2RFeatMembMigration extends R2RMigration {

    public function __construct($arguments) {
        parent::__construct($arguments);

        $sourceType = 'featured_r2r_member';
        $destType = 'featured_r2r_partner';

        $this->description = t('Import $sourceType into $destType from legacy R2R database.');
        $query = $this->getConnection()
            ->select('node', 'n')
            ->fields('n', array('nid', 'vid', 'language', 'title',
                'uid', 'status', 'created', 'changed', 'comment', 'promote',
                'moderate', 'sticky', 'tnid', 'translate'))
            ->condition('type', $sourceType);
        $query->innerJoin('node_revisions', 'nr', 'n.nid=nr.nid');
        $query->fields('nr', array('body', 'teaser', 'format'));
        $query->innerJoin('content_type_featured_r2r_member', 'ctfrm', 'nr.nid=ctfrm.nid');
        $query->fields('ctfrm', array('field_feat_member_degree_value','field_feat_member_degree_format','field_feat_member_promotion_value','field_feat_member_promo_link_url','field_feat_member_promo_link_title','field_feat_member_promo_link_attributes','field_feat_memb_promo_title_value','field_feat_memb_realted_discuss_nid','field_feat_memb_photo_fid','field_feat_memb_photo_list','field_feat_memb_photo_data','field_feat_memb_org_value','field_feat_memb_home_teaser_value','field_feat_memb_home_teaser_format','field_question_1_value','field_question_2_value','field_question_3_value','field_question_4_value','field_question_5_value','field_answer_1_value','field_answer_1_format','field_answer_2_value','field_answer_2_format','field_answer_3_value','field_answer_3_format','field_answer_4_value','field_answer_4_format','field_answer_5_value','field_answer_5_format'));
        //$query->innerJoin('og_ancestry', 'og', 'og.nid=ctfrm.nid');
        //$query->fields('og', array('group_nid'));

        $this->source = new MigrateSourceSQL($query);

        $node_options = MigrateDestinationNode::options('en', 'full_html');
        $this->destination = new MigrateDestinationNode($destType,$node_options);

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

        $this->addSimpleMappings(array('title','body', 'created','changed','status','promote','sticky','language','tnid','translate'));
        $this->addFieldMapping('comment','comment');
        $this->addFieldMapping('uid', 'uid')->sourceMigration('R2RUsers');
        $this->addFieldMapping('body:summary','teaser');
        $this->addFieldMapping('field_feat_memb_home_teaser','field_feat_memb_home_teaser_value');
        $this->addFieldMapping('field_feat_memb_photo:file_class')->defaultValue('MigrateFileFid'); //the photo should anticipate the value as an FID for an already existing file
        $this->addFieldMapping('field_feat_memb_photo','field_feat_memb_photo_fid')->sourceMigration('R2RFiles'); //the file fid from the legacy database should be passed through the mapping for the files migration, yielding an FID for the corresponding file in the new database
        $this->addFieldMapping('field_feat_member_degree','field_feat_member_degree_value');
        $this->addFieldMapping('field_feat_memb_org','field_feat_memb_org_value');
        $this->addFieldMapping('field_related_discussion','field_feat_memb_realted_discuss_nid')->sourceMigration('R2RDiscussions');
        $this->addFieldMapping('field_feat_memb_promo_title','field_feat_memb_promo_title_value');
        $this->addFieldMapping('field_feat_member_promotion','field_feat_member_promotion_value');
        $this->addFieldMapping('field_feat_member_promo_link','field_feat_member_promo_link_url');
        $this->addFieldMapping('field_feat_member_promo_link:title','field_feat_member_promo_link_title');
        $this->addFieldMapping('field_feat_member_promo_link:attributes','field_feat_member_promo_link_attributes');
        $this->addFieldMapping('field_question_1','field_question_1_value');
        $this->addFieldMapping('field_answer_1','field_answer_1_value');
        $this->addFieldMapping('field_answer_1:format')->defaultValue('filtered_html');
        $this->addFieldMapping('field_question_2','field_question_2_value');
        $this->addFieldMapping('field_answer_2','field_answer_2_value');
        $this->addFieldMapping('field_answer_2:format')->defaultValue('filtered_html');
        $this->addFieldMapping('field_question_3','field_question_3_value');
        $this->addFieldMapping('field_answer_3','field_answer_3_value');
        $this->addFieldMapping('field_answer_3:format')->defaultValue('filtered_html');
        $this->addFieldMapping('field_question_4','field_question_4_value');
        $this->addFieldMapping('field_answer_4','field_answer_4_value');
        $this->addFieldMapping('field_answer_4:format')->defaultValue('filtered_html');
        $this->addFieldMapping('field_question_5','field_question_5_value');
        $this->addFieldMapping('field_answer_5','field_answer_5_value');
        $this->addFieldMapping('field_answer_5:format')->defaultValue('filtered_html');
        //filtered_html
        $this->addFieldMapping('field_feat_memb_related_links','related_links_array');
        $this->addFieldMapping('field_feat_memb_related_file','related_files_array')->sourceMigration('R2RFiles');
        //$this->addFieldMapping('og_group_ref', 'group_nid')->sourceMigration('R2RWorkspace');
    }

    public function prepareRow($current_row) {
        if (parent::prepareRow($row) === FALSE) { //call parent prepare row function -- best practice
            return FALSE;
       }
        $nid = $current_row->nid; //retrieve the current record's nid
        $query = $this->getConnection()->select('content_field_feat_memb_related_links', 'rl')
                    ->fields('rl', array('field_feat_memb_related_links_url','field_feat_memb_related_links_title','field_feat_memb_related_links_attributes'))
                    ->condition('rl.nid', $nid); 
        $query2 = $this->getConnection()->select('content_field_feat_memb_related_file', 'rf')
                    ->fields('rf', array('field_feat_memb_related_file_fid'))
                    ->condition('rf.nid', $nid); 
        $results = $query->execute(); //execute, storing results
        $results2 = $query2->execute();

        //instansiate destination group array property
        $current_row->related_links_array = array();
        $current_row->related_files_array = array();
        $delta = 0; //iteration counter
        foreach ($results as $key => $result_row) {
            $current_row->related_links_array[$delta] = $result_row->field_related_links_url; //add each retrieved nid to the list of groups this record will be associated with
            $delta++; //post-increment our iteration counter
        }
        $delta = 0;
        foreach ($results2 as $key => $result_row) {
            $current_row->related_files_array[$delta] = $result_row->field_feat_memb_related_file_fid; //add each retrieved nid to the list of groups this record will be associated with
            $delta++; //post-increment our iteration counter
        }

        return true; //on no condition do we ignore a record; always return true
    }
}