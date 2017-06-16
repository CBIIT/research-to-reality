<?php
/**
 * @file
 * Migration for player data.
 */

class R2RPageMigration extends R2RMigration {

    public function __construct($arguments) {
        parent::__construct($arguments);

        $sourceType = $destType = 'page';

        $this->description = t('Import pages from legacy R2R database.');

        $query = $this->getConnection()
            ->select('node', 'n')
            ->fields('n', array('nid', 'vid', 'language', 'title',
                'uid', 'status', 'created', 'changed', 'comment', 'promote',
                'moderate', 'sticky', 'tnid', 'translate'))
            ->condition('type', $sourceType)
            ->orderBy('changed');
        $query->innerJoin('node_revisions', 'nr', 'n.vid=nr.vid');
        $query->fields('nr', array('body', 'teaser', 'format'));

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
        $this->addFieldMapping('uid', 'uid')->sourceMigration('R2RUsers');
    }
}
