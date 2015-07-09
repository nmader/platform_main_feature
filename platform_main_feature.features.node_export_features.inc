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
      \'created\' => \'1433254170\',
      \'changed\' => \'1433254170\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'09648dae-14d6-46fe-82cd-cf4c0739201d\',
      \'revision_timestamp\' => \'1433254170\',
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
      \'last_comment_timestamp\' => \'1433254170\',
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
      \'created\' => \'1433254170\',
      \'changed\' => \'1433254170\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'11ab3414-deb5-4985-9797-1a90ac057005\',
      \'revision_timestamp\' => \'1433254170\',
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
      \'last_comment_timestamp\' => \'1433254170\',
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
      \'created\' => \'1433254170\',
      \'changed\' => \'1433951314\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'15310bdf-5e1b-408b-8a7b-19ae5569eabd\',
      \'revision_timestamp\' => \'1433951314\',
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
      \'last_comment_timestamp\' => \'1433254170\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'islandora\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'7\',
        \'source\' => \'node/3\',
        \'alias\' => \'award-open-source\',
        \'language\' => \'und\',
      ),
      \'menu\' => array(
        \'link_title\' => \'Open Source\',
        \'mlid\' => 0,
        \'plid\' => \'0\',
        \'menu_name\' => \'main-menu\',
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
      \'created\' => \'1433254170\',
      \'changed\' => \'1433254170\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'329a2134-140a-4447-a59f-389948bef2ba\',
      \'revision_timestamp\' => \'1433254170\',
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
      \'last_comment_timestamp\' => \'1433254170\',
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
      \'created\' => \'1433254170\',
      \'changed\' => \'1433254170\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'3dfbfeaf-cb77-4ac0-b16f-145af17649b5\',
      \'revision_timestamp\' => \'1433254170\',
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
      \'last_comment_timestamp\' => \'1433254170\',
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
        \'link_title\' => \'About\',
        \'mlid\' => 0,
        \'plid\' => \'0\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'-46\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'1\',
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
      \'created\' => \'1433254170\',
      \'changed\' => \'1433254170\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'6790d072-e293-4a54-aa4e-113c0350d41a\',
      \'revision_timestamp\' => \'1433254170\',
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
      \'last_comment_timestamp\' => \'1433254170\',
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
      \'vid\' => \'11\',
      \'uid\' => \'1\',
      \'title\' => \'DGI Info\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'77ac58d0-ebd6-443d-a5c5-e8c562e63799\',
      \'nid\' => \'11\',
      \'type\' => \'image_block\',
      \'language\' => \'en\',
      \'created\' => \'1433262369\',
      \'changed\' => \'1434129726\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'813a1e4d-6cce-4c45-b192-64095f487568\',
      \'revision_timestamp\' => \'1434129726\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "discoverygarden inc.\\r\\n155 Queen St.\\r\\nCharlottetown, PE, Canada\\r\\nC1A 4B4\\r\\nPhone: (902) 892-3086\\r\\nFax: (902) 367-3483",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>discoverygarden inc.<br />\\n155 Queen St.<br />\\nCharlottetown, PE, Canada<br />\\nC1A 4B4<br />\\nPhone: (902) 892-3086<br />\\nFax: (902) 367-3483</p>\\n",
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
      \'last_comment_timestamp\' => \'1433262369\',
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
      \'created\' => \'1433254170\',
      \'changed\' => \'1433789045\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'847549c5-2502-4938-8fbb-4ea35e2f4815\',
      \'revision_timestamp\' => \'1433789045\',
      \'revision_uid\' => \'1\',
      \'body\' => array(),
      \'field_image_block\' => array(
        \'und\' => array(
          array(
            \'fid\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'dgi_logo.png\',
            \'uri\' => \'public://dgi_logo.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'30071\',
            \'status\' => \'1\',
            \'timestamp\' => \'1433789045\',
            \'uuid\' => \'c6dc4dae-02f0-460b-b11a-39af67162bb3\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'1000\',
            \'height\' => \'270\',
            \'node_export_file_data\' => \'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UmVhZHlxyWU8AAADJGlUWHRYTUw6Y29tLmFkb2JlLnhtcAAAAAAAPD94cGFja2V0IGJlZ2luPSLvu78iIGlkPSJXNU0wTXBDZWhpSHpyZVN6TlRjemtjOWQiPz4gPHg6eG1wbWV0YSB4bWxuczp4PSJhZG9iZTpuczptZXRhLyIgeDp4bXB0az0iQWRvYmUgWE1QIENvcmUgNS4zLWMwMTEgNjYuMTQ1NjYxLCAyMDEyLzAyLzA2LTE0OjU2OjI3ICAgICAgICAiPiA8cmRmOlJERiB4bWxuczpyZGY9Imh0dHA6Ly93d3cudzMub3JnLzE5OTkvMDIvMjItcmRmLXN5bnRheC1ucyMiPiA8cmRmOkRlc2NyaXB0aW9uIHJkZjphYm91dD0iIiB4bWxuczp4bXA9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC8iIHhtbG5zOnhtcE1NPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvbW0vIiB4bWxuczpzdFJlZj0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL3NUeXBlL1Jlc291cmNlUmVmIyIgeG1wOkNyZWF0b3JUb29sPSJBZG9iZSBQaG90b3Nob3AgQ1M2IChNYWNpbnRvc2gpIiB4bXBNTTpJbnN0YW5jZUlEPSJ4bXAuaWlkOkNBRDU5NEY5M0FBNDExRTQ5NkMxQTgyQUM1NDg0RTUxIiB4bXBNTTpEb2N1bWVudElEPSJ4bXAuZGlkOkNBRDU5NEZBM0FBNDExRTQ5NkMxQTgyQUM1NDg0RTUxIj4gPHhtcE1NOkRlcml2ZWRGcm9tIHN0UmVmOmluc3RhbmNlSUQ9InhtcC5paWQ6Q0FENTk0RjczQUE0MTFFNDk2QzFBODJBQzU0ODRFNTEiIHN0UmVmOmRvY3VtZW50SUQ9InhtcC5kaWQ6Q0FENTk0RjgzQUE0MTFFNDk2QzFBODJBQzU0ODRFNTEiLz4gPC9yZGY6RGVzY3JpcHRpb24+IDwvcmRmOlJERj4gPC94OnhtcG1ldGE+IDw/eHBhY2tldCBlbmQ9InIiPz76W2ShAABnmklEQVR42uydB7hdRdWwd6gCUgIoRaUEKSrSEkCuCMiXiBX9VXpREBIBQYIlUVFBRRP9NAp+SAIWFFQIWBAs5IoEQmgJXTqh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\',
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
      \'last_comment_timestamp\' => \'1433254170\',
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
      \'created\' => \'1433254170\',
      \'changed\' => \'1433254170\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'9c8f491e-d901-4fc8-9b5d-75490185bdd6\',
      \'revision_timestamp\' => \'1433254170\',
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
      \'last_comment_timestamp\' => \'1433254170\',
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
      \'created\' => \'1433254170\',
      \'changed\' => \'1433254170\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'c4f960eb-e02b-4b17-9ef3-ab0e5931ac0f\',
      \'revision_timestamp\' => \'1433254170\',
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
      \'last_comment_timestamp\' => \'1433254170\',
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
      \'vid\' => \'14\',
      \'uid\' => \'1\',
      \'title\' => \'Featured Collection Description\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'2691f536-c7fb-4ecb-8dd6-9757a55bbe34\',
      \'nid\' => \'14\',
      \'type\' => \'image_block\',
      \'language\' => \'en\',
      \'created\' => \'1434482607\',
      \'changed\' => \'1434482607\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'c839392b-48fd-410a-ac4a-b3f26f0e4485\',
      \'revision_timestamp\' => \'1434482607\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Lorem ipsum dolor sit amet, consectetur adipiscing elit. Vestibulum et elit at odio tempor ultrices. Duis ac turpis erat. Quisque hendrerit id mauris eu commodo. Sed vitae maximus tellus. Maecenas euismod in magna sed tempor. Suspendisse potenti. Vestibulum at ante nec erat semper consequat. Ut vel sem dapibus, malesuada sem sit amet, suscipit nunc. Morbi ac scelerisque velit.\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Vestibulum et elit at odio tempor ultrices. Duis ac turpis erat. Quisque hendrerit id mauris eu commodo. Sed vitae maximus tellus. Maecenas euismod in magna sed tempor. Suspendisse potenti. Vestibulum at ante nec erat semper consequat. Ut vel sem dapibus, malesuada sem sit amet, suscipit nunc. Morbi ac scelerisque velit.</p>\\n",
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
      \'last_comment_timestamp\' => \'1434482607\',
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
      \'created\' => \'1433254170\',
      \'changed\' => \'1433254170\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'dd9db579-7172-436d-a740-721ec9a68523\',
      \'revision_timestamp\' => \'1433254170\',
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
      \'last_comment_timestamp\' => \'1433254170\',
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
  (object) array(
      \'vid\' => \'13\',
      \'uid\' => \'1\',
      \'title\' => \'Search all\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'2\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'d4499021-cdda-4e30-926e-026a47dbdb6c\',
      \'nid\' => \'13\',
      \'type\' => \'front_page\',
      \'language\' => \'en\',
      \'created\' => \'1433774821\',
      \'changed\' => \'1433774851\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'e432af16-d175-4959-906a-bae68d01c36a\',
      \'revision_timestamp\' => \'1433774851\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Derpie content in derp\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Derpie content in derp</p>\\n",
            \'safe_summary\' => \'\',
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
      \'last_comment_timestamp\' => \'1433774821\',
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
)',
);
  return $node_export;
}
