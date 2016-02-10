<?php
/**
 * @file
 * platform_main_feature.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function platform_main_feature_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'vid\' => \'1\',
      \'uid\' => \'1\',
      \'title\' => \'Creative Content License\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'eeef4363-12b5-4589-90fb-d4807789f042\',
      \'nid\' => \'1\',
      \'type\' => \'page\',
      \'language\' => \'und\',
      \'created\' => \'1454521818\',
      \'changed\' => \'1454521818\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'09648dae-14d6-46fe-82cd-cf4c0739201d\',
      \'revision_timestamp\' => \'1454521818\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Lipsum\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Lipsum</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1454521818\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'islandora\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'1\',
        \'source\' => \'node/1\',
        \'alias\' => \'cc-license\',
        \'language\' => \'und\',
      ),
      \'menu\' => array(
        \'link_title\' => \'Creative content license\',
        \'mlid\' => 0,
        \'plid\' => \'0\',
        \'menu_name\' => \'menu-footer-menu\',
        \'weight\' => \'-50\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'2\',
      \'uid\' => \'1\',
      \'title\' => \'Researchers\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'103a306d-27b0-4e0b-84ec-67d13c0397e3\',
      \'nid\' => \'2\',
      \'type\' => \'page\',
      \'language\' => \'und\',
      \'created\' => \'1454521818\',
      \'changed\' => \'1454521818\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'11ab3414-deb5-4985-9797-1a90ac057005\',
      \'revision_timestamp\' => \'1454521818\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Lipsum\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Lipsum</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1454521818\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'islandora\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'2\',
        \'source\' => \'node/2\',
        \'alias\' => \'researchers\',
        \'language\' => \'und\',
      ),
      \'menu\' => array(
        \'link_title\' => \'Researchers\',
        \'mlid\' => 0,
        \'plid\' => \'0\',
        \'menu_name\' => \'menu-footer-menu\',
        \'weight\' => \'-49\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'3\',
      \'uid\' => \'1\',
      \'title\' => \'Award Winning Open Source\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'1e26a683-a08d-4655-8907-c793c08bf24e\',
      \'nid\' => \'3\',
      \'type\' => \'image_block\',
      \'language\' => \'und\',
      \'created\' => \'1454521818\',
      \'changed\' => \'1454521818\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'15310bdf-5e1b-408b-8a7b-19ae5569eabd\',
      \'revision_timestamp\' => \'1454521818\',
      \'revision_uid\' => \'1\',
      \'body\' => array(),
      \'field_image_block\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1454521818\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'islandora\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'4\',
      \'uid\' => \'1\',
      \'title\' => \'Contact\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'1a184baf-0988-4fa7-b1f4-ac0b1a39b4c8\',
      \'nid\' => \'4\',
      \'type\' => \'page\',
      \'language\' => \'und\',
      \'created\' => \'1454521818\',
      \'changed\' => \'1454521818\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'329a2134-140a-4447-a59f-389948bef2ba\',
      \'revision_timestamp\' => \'1454521818\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "discoverygarden inc.\\r\\n\\r\\nSims Office Suites Building | 3rd Floor\\r\\n\\r\\n118 Sydney Street, Charlottetown, PE\\r\\n\\r\\nPhone: 902.367.3851\\r\\n\\r\\nEmail: info@discoverygarden.ca\\r\\n\\r\\nWeb: discoverygarden.ca",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>discoverygarden inc.</p>\\n<p>Sims Office Suites Building | 3rd Floor</p>\\n<p>118 Sydney Street, Charlottetown, PE</p>\\n<p>Phone: 902.367.3851</p>\\n<p>Email: <a href=\\"mailto:info@discoverygarden.ca\\">info@discoverygarden.ca</a></p>\\n<p>Web: discoverygarden.ca</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1454521818\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'islandora\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'3\',
        \'source\' => \'node/4\',
        \'alias\' => \'make-contact\',
        \'language\' => \'und\',
      ),
      \'menu\' => array(
        \'link_title\' => \'Make contact\',
        \'mlid\' => 0,
        \'plid\' => \'0\',
        \'menu_name\' => \'menu-footer-menu\',
        \'weight\' => \'-47\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'5\',
      \'uid\' => \'1\',
      \'title\' => \'About\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'97667383-3f6c-4db7-a93c-c5112ae72e99\',
      \'nid\' => \'5\',
      \'type\' => \'page\',
      \'language\' => \'und\',
      \'created\' => \'1454521818\',
      \'changed\' => \'1454521818\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'3dfbfeaf-cb77-4ac0-b16f-145af17649b5\',
      \'revision_timestamp\' => \'1454521818\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "The discoverygarden platform leverages the flexibility of Islandora, an open source digital asset management system; supporting a variety of file formats including PDF, TIFF, JPEG, and various audio and video file formats through the standard Islandora Solution Packs.  \\r\\n\\r\\nThe platform is fully hosted providing customers with automated software updates. The platform can be purchased based on the amount of cloud storage needed. \\r\\n\\r\\nThe discoverygarden platform will include access to monthly training, a web-based knowledge center that will include frequently asked questions and other tools to aid in platform management, in addition discoverygarden intends to provide instant messaging support through the knowledge center for customers who require assistance. Monthly support packages are available in addition to the other support-style services included with the platform. \\r\\n\\r\\nThe discoverygarden platform can be used to safeguard, preserve, and make accessible any content including special collections, archives, administrative documents, and traditional institutional repository content such as theses or dissertations. \\r\\nThe discoverygarden platform includes the scholar module, a suite of features focused on creating an easy to use and engaging institutional repository.  It addresses the need to encourage greater usage of institutional repositories by including numerous export and citation styles, as well as enhanced options to import publications using identifiers such as DOI and PMID. For administrators, a rights management feature allows clients to restrict and provide access to citations as necessary. The discoverygarden platform also provides statistics and reporting features, giving clients a better understanding of usage.\\r\\n\\r\\nHere is a list of the new features included in the discoverygarden platform: \\r\\n\\r\\n<ul>\\r\\n<li>Three standard theme options</li>\\r\\n<li>Rights management through our embargo module</li>\\r\\n<li>CiteProc and Citation Style Language (CSL) modules</li>\\r\\n<li>RoMEO, Zotero, and Bibutils Integration</li>\\r\\n<li>Citation Batch Importing for DOI, EndNote XML, PubMed ID, and RIS formats </li>\\r\\n<li>Citation Bookmarking and Batch Export</li>\\r\\n<li>Compliant with the Open Archives Initiative</li>\\r\\n<li>Able to integrate with Google Scholar</li>\\r\\n</ul>\\r\\n\\r\\ndiscoverygarden aims to facilitate continuous improvement of the hosted product by encouraging clients to collaborate in the future development decision-making process. Additional services are available to customers based on discoverygarden’s standard professional services rates. They include: \\r\\n<ul>\\r\\n<li>Consulting services </li>\\r\\n<li>Custom website theme</li>\\r\\n<li>Advanced training</li>\\r\\n<li>Data migration </li>\\r\\n<li>Metadata mapping</li>\\r\\n</ul>\\r\\n\\r\\nContact us today to get your own hosted discoverygarden platform. \\r\\n \\r\\n\\r\\n ",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>The discoverygarden platform leverages the flexibility of Islandora, an open source digital asset management system; supporting a variety of file formats including PDF, TIFF, JPEG, and various audio and video file formats through the standard Islandora Solution Packs.  </p>\\n<p>The platform is fully hosted providing customers with automated software updates. The platform can be purchased based on the amount of cloud storage needed. </p>\\n<p>The discoverygarden platform will include access to monthly training, a web-based knowledge center that will include frequently asked questions and other tools to aid in platform management, in addition discoverygarden intends to provide instant messaging support through the knowledge center for customers who require assistance. Monthly support packages are available in addition to the other support-style services included with the platform. </p>\\n<p>The discoverygarden platform can be used to safeguard, preserve, and make accessible any content including special collections, archives, administrative documents, and traditional institutional repository content such as theses or dissertations.<br />\\nThe discoverygarden platform includes the scholar module, a suite of features focused on creating an easy to use and engaging institutional repository.  It addresses the need to encourage greater usage of institutional repositories by including numerous export and citation styles, as well as enhanced options to import publications using identifiers such as DOI and PMID. For administrators, a rights management feature allows clients to restrict and provide access to citations as necessary. The discoverygarden platform also provides statistics and reporting features, giving clients a better understanding of usage.</p>\\n<p>Here is a list of the new features included in the discoverygarden platform: </p>\\n<ul><li>Three standard theme options</li>\\n<li>Rights management through our embargo module</li>\\n<li>CiteProc and Citation Style Language (CSL) modules</li>\\n<li>RoMEO, Zotero, and Bibutils Integration</li>\\n<li>Citation Batch Importing for DOI, EndNote XML, PubMed ID, and RIS formats </li>\\n<li>Citation Bookmarking and Batch Export</li>\\n<li>Compliant with the Open Archives Initiative</li>\\n<li>Able to integrate with Google Scholar</li>\\n</ul><p>discoverygarden aims to facilitate continuous improvement of the hosted product by encouraging clients to collaborate in the future development decision-making process. Additional services are available to customers based on discoverygarden’s standard professional services rates. They include: </p>\\n<ul><li>Consulting services </li>\\n<li>Custom website theme</li>\\n<li>Advanced training</li>\\n<li>Data migration </li>\\n<li>Metadata mapping</li>\\n</ul><p>Contact us today to get your own hosted discoverygarden platform.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1454521818\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'islandora\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'4\',
        \'source\' => \'node/5\',
        \'alias\' => \'about\',
        \'language\' => \'und\',
      ),
      \'menu\' => array(
        \'link_title\' => \'About this site\',
        \'mlid\' => 0,
        \'plid\' => \'0\',
        \'menu_name\' => \'menu-header-menu\',
        \'weight\' => \'0\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'6\',
      \'uid\' => \'1\',
      \'title\' => \'Search the Repo\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'f436b187-2bf5-4484-bb57-b79dee365a0e\',
      \'nid\' => \'6\',
      \'type\' => \'page\',
      \'language\' => \'und\',
      \'created\' => \'1454521818\',
      \'changed\' => \'1454521818\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'6790d072-e293-4a54-aa4e-113c0350d41a\',
      \'revision_timestamp\' => \'1454521818\',
      \'revision_uid\' => \'1\',
      \'body\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1454521818\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'islandora\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'7\',
      \'uid\' => \'1\',
      \'title\' => \'Footer Logo\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'4e58a48a-6a98-404f-8faa-b86676447c44\',
      \'nid\' => \'7\',
      \'type\' => \'image_block\',
      \'language\' => \'und\',
      \'created\' => \'1454521818\',
      \'changed\' => \'1455116326\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'847549c5-2502-4938-8fbb-4ea35e2f4815\',
      \'revision_timestamp\' => \'1455116326\',
      \'revision_uid\' => \'1\',
      \'body\' => array(),
      \'field_image_block\' => array(
        \'und\' => array(
          array(
            \'fid\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'PC_logo_square.png\',
            \'uri\' => \'public://PC_logo_square.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'19754\',
            \'status\' => \'1\',
            \'timestamp\' => \'1455116326\',
            \'uuid\' => \'e6f52372-2a57-43f7-b20c-ea5eeb6c35f1\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'600\',
            \'height\' => \'476\',
            \'node_export_file_data\' => \'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\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1454521818\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'islandora\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'8\',
      \'uid\' => \'1\',
      \'title\' => \'Welcome to our Digital Archive\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'eaea4d5c-8206-482e-a95d-24975b39a4b6\',
      \'nid\' => \'8\',
      \'type\' => \'image_block\',
      \'language\' => \'und\',
      \'created\' => \'1454521818\',
      \'changed\' => \'1454521818\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'9c8f491e-d901-4fc8-9b5d-75490185bdd6\',
      \'revision_timestamp\' => \'1454521818\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'This is a short description of the website and or a paragraph describing the content a user can expect to see here.\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>This is a short description of the website and or a paragraph describing the content a user can expect to see here.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_image_block\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1454521818\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'islandora\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'9\',
      \'uid\' => \'1\',
      \'title\' => \'Islandora Advanced Search\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'e6b92772-5ec2-418b-9e9a-577156def660\',
      \'nid\' => \'9\',
      \'type\' => \'page\',
      \'language\' => \'und\',
      \'created\' => \'1454521818\',
      \'changed\' => \'1454521818\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'c4f960eb-e02b-4b17-9ef3-ab0e5931ac0f\',
      \'revision_timestamp\' => \'1454521818\',
      \'revision_uid\' => \'1\',
      \'body\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1454521818\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'islandora\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'5\',
        \'source\' => \'node/9\',
        \'alias\' => \'advanced-search\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'10\',
      \'uid\' => \'1\',
      \'title\' => \'Policies\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'f1c3f843-cb61-41c8-9eb1-74da357c68cf\',
      \'nid\' => \'10\',
      \'type\' => \'page\',
      \'language\' => \'und\',
      \'created\' => \'1454521818\',
      \'changed\' => \'1454521818\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'dd9db579-7172-436d-a740-721ec9a68523\',
      \'revision_timestamp\' => \'1454521818\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Lipsum\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Lipsum</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1454521818\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'islandora\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'6\',
        \'source\' => \'node/10\',
        \'alias\' => \'policies\',
        \'language\' => \'und\',
      ),
      \'menu\' => array(
        \'link_title\' => \'Policies\',
        \'mlid\' => 0,
        \'plid\' => \'0\',
        \'menu_name\' => \'menu-footer-menu\',
        \'weight\' => \'-48\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
    ),
)',
);
  return $node_export;
}
