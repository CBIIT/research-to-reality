<?php
/**
 * @file
 * Migration for player data.
 */

class R2RWorkspaceMigration extends R2RMigration {

    public function __construct($arguments) {
        parent::__construct($arguments);

        $sourceType = $destType = 'workspace';

        $this->description = t('Import workspaces and their groups from legacy R2R database.');
        //select * from node as n inner join node_revisions as nr on n.nid = nr.nid inner join og on nr.nid = og.nid where n.type='workspace'
        $query = $this->getConnection()
            ->select('node', 'n')
            ->fields('n', array('nid', 'vid', 'language', 'title',
                'uid', 'status', 'created', 'changed', 'comment', 'promote',
                'moderate', 'sticky', 'tnid', 'translate'))
            ->condition('type', $sourceType);
        $query->innerJoin('node_revisions', 'nr', 'n.nid=nr.nid');
        $query->fields('nr', array('body', 'teaser', 'format'));
        $query->innerJoin('og', 'og', 'nr.nid=og.nid');
        $query->fields('og', array('og_description', 'og_private', 'og_register'));  //the destinations of these values is unkown in the drupal7 db

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

        // TODO: AddSimpleMapping may be substituted here
        $this->addSimpleMappings(array('title','body', 'created','changed','status','promote','sticky','revision','log','language','tnid','translate'));
        $this->addFieldMapping('group_group')->defaultValue(1);
        $this->addFieldMapping('uid', 'uid')->sourceMigration('R2RUsers');
        $this->addFieldMapping('body:summary', 'teaser');
    }

    
}
