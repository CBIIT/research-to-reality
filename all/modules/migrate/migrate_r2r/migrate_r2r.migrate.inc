<?php

/**
 * Implements hook_migrate_api().
 */
function migrate_r2r_migrate_api() {
  return array(
    'api' => 2,
    'field handlers' => array(
          'CustomDateFieldHandler',
    ),
    'groups' => array(
      'R2R' => array(
        'title' => t('R2R'),
      ),
    ),
    'migrations' => array(
          'R2RUsers' => array(
            'class_name' => 'R2RUserMigration',
            'group_name' => 'Users',
            //i think there should be a dependency on R2RUsersPictures
            //since the mapping is necessary to complete the migration
          ),
          'R2RUsersPictures' => array(
            'class_name' => 'R2RUserPictureMigration',
            'group_name' => 'Users',
          ),
          'R2RDiscussions' => array(
            'class_name' => 'R2RDiscussionMigration',
            'group_name' => 'Discussions',
          ),
          'R2RDiscussionsComments' => array(
            'class_name' => 'R2RDiscussionCommentsMigration',
            'group_name' => 'Comments',
          ),
          'R2RHomeBlerb' => array(
            'class_name' => 'R2RHomeBlerbMigration',
            'group_name' => 'R2R',
          ),
          'R2RPresenter' => array(
            'class_name' => 'R2RPresenterMigration',
            'group_name' => 'R2R',
          ),
          'R2RStory' => array(
            'class_name' => 'R2RStoryMigration',
            'group_name' => 'R2R',
          ),
          'R2RHomeFeature' => array(
            'class_name' => 'R2RHomeFeatureMigration',
            'group_name' => 'R2R',
          ),
          'R2REvent' => array(
            'class_name' => 'R2REventMigration',
            'group_name' => 'R2R',
          ),
          'R2RTaxonomy' => array(
            'class_name' => 'R2RTaxonomyMigration',
            'group_name' => 'R2R',
          ),
          'R2RFiles' => array(
            'class_name' => 'R2RFilesMigration',
            'group_name' => 'Files',
          ),
          'R2RPair' => array(
            'class_name' => 'R2RPairMigration',
            'group_name' => 'Group',
          ),
        'R2RSeminar' => array(
            'class_name' => 'R2RSeminarMigration',
            'group_name' => 'R2R',
        ),
        'R2RPage' => array(
            'class_name' => 'R2RPageMigration',
            'group_name' => 'R2R',
        ),
        'R2RWorkspace' => array(
            'class_name' => 'R2RWorkspaceMigration',
            'group_name' => 'WS',
        ),
        'R2RGroupDoc' => array(
            'class_name' => 'R2RGroupDocMigration',
            'group_name' => 'Group',
        ),
        'R2RGroupEvent' => array(
            'class_name' => 'R2RGroupEventMigration',
            'group_name' => 'Group',
        ),
        'R2RArchive' => array(
            'class_name' => 'R2RArchiveMigration',
            'group_name' => 'Group',
        ),
        'R2RGroupTask' => array(
            'class_name' => 'R2RGroupTaskMigration',
            'group_name' => 'Group',
        ),
        'R2RGroupDiscussion' => array(
            'class_name' => 'R2RGroupDiscussionMigration',
            'group_name' => 'Discussions',
        ),
        'R2RFeatMemb' => array(
            'class_name' => 'R2RFeatMembMigration',
            'group_name' => 'R2R',
        ),
        'R2RLCStory' => array(
            'class_name' => 'R2RLCStoryMigration',
            'group_name' => 'LC',
        ),
        'R2RLCEvent' => array(
            'class_name' => 'R2RLCGroupEventMigration',
            'group_name' => 'LC',
        ),
        'R2RLCWorkspace' => array(
            'class_name' => 'R2RLCWorkspaceMigration',
            'group_name' => 'WS',
        ),
        'R2RLCGroupDoc' => array(
            'class_name' => 'R2RLCGroupDocMigration',
            'group_name' => 'LC',
        ),
        'R2RLCArchive' => array(
            'class_name' => 'R2RLCArchiveMigration',
            'group_name' => 'LC',
        ),
        'R2RLCGroupTask' => array(
            'class_name' => 'R2RLCGroupTaskMigration',
            'group_name' => 'LC',
        ),
        'R2RLCGroupDiscussion' => array(
            'class_name' => 'R2RLCGroupDiscussionMigration',
            'group_name' => 'Discussions',
        ),
        'R2RLCPair' => array(
            'class_name' => 'R2RLCPairMigration',
            'group_name' => 'LC',
        ),
        'R2ROGRoles' => array(
            'class_name' => 'R2ROGMembershipMigration',
            'group_name' => 'WS',
        ),
        'R2RLCDiscussionComments' => array(
					'class_name' => 'R2RLCDiscussionCommentsMigration',
					'group_name' => 'Comments',
				),
        'R2RStoryComments' => array(
					'class_name' => 'R2RStoryCommentsMigration',
					'group_name' => 'Comments',
				),
        'R2RGroupDiscussionComments' => array(
					'class_name' => 'R2RGroupDiscussionCommentsMigration',
					'group_name' => 'Comments',
				),
    ),
  );
}
