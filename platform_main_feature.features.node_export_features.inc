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
      \'title\' => \'Footer Logo\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'a1609699-50c1-4f14-949f-088116117f1f\',
      \'nid\' => \'1\',
      \'type\' => \'image_block\',
      \'language\' => \'en\',
      \'created\' => \'1450800140\',
      \'changed\' => \'1450800140\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'008afd6d-2018-4276-aa1d-69d941c6bad2\',
      \'revision_timestamp\' => \'1450800140\',
      \'revision_uid\' => \'1\',
      \'body\' => array(),
      \'field_image_block\' => array(
        \'und\' => array(
          array(
            \'fid\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'lib4ri.png\',
            \'uri\' => \'public://lib4ri.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'17100\',
            \'status\' => \'1\',
            \'timestamp\' => \'1450800150\',
            \'uuid\' => \'4562bd36-a1e7-46db-8c88-efa44a899fa7\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'300\',
            \'height\' => \'126\',
            \'node_export_file_data\' => \'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\',
          ),
        ),
      ),
      \'field_image_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'http://www.google.ca\',
            \'format\' => NULL,
            \'safe_value\' => \'http://www.google.ca\',
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
      \'last_comment_timestamp\' => \'1450800140\',
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
      \'vid\' => \'2\',
      \'uid\' => \'1\',
      \'title\' => \'Creative Content License\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'eeef4363-12b5-4589-90fb-d4807789f042\',
      \'nid\' => \'2\',
      \'type\' => \'page\',
      \'language\' => \'und\',
      \'created\' => \'1450800140\',
      \'changed\' => \'1450800140\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'09648dae-14d6-46fe-82cd-cf4c0739201d\',
      \'revision_timestamp\' => \'1450800140\',
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
      \'last_comment_timestamp\' => \'1450800140\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'islandora\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'1\',
        \'source\' => \'node/2\',
        \'alias\' => \'cc-license\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'3\',
      \'uid\' => \'1\',
      \'title\' => \'Researchers\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'103a306d-27b0-4e0b-84ec-67d13c0397e3\',
      \'nid\' => \'3\',
      \'type\' => \'page\',
      \'language\' => \'und\',
      \'created\' => \'1450800140\',
      \'changed\' => \'1450800140\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'11ab3414-deb5-4985-9797-1a90ac057005\',
      \'revision_timestamp\' => \'1450800140\',
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
      \'last_comment_timestamp\' => \'1450800140\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'islandora\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'2\',
        \'source\' => \'node/3\',
        \'alias\' => \'researchers\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'4\',
      \'uid\' => \'1\',
      \'title\' => \'Award Winning Open Source\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'1e26a683-a08d-4655-8907-c793c08bf24e\',
      \'nid\' => \'4\',
      \'type\' => \'image_block\',
      \'language\' => \'und\',
      \'created\' => \'1450800140\',
      \'changed\' => \'1450800140\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'15310bdf-5e1b-408b-8a7b-19ae5569eabd\',
      \'revision_timestamp\' => \'1450800140\',
      \'revision_uid\' => \'1\',
      \'body\' => array(),
      \'field_image_block\' => array(),
      \'field_image_link\' => array(),
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
      \'last_comment_timestamp\' => \'1450800140\',
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
      \'vid\' => \'5\',
      \'uid\' => \'1\',
      \'title\' => \'Contact\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'1a184baf-0988-4fa7-b1f4-ac0b1a39b4c8\',
      \'nid\' => \'5\',
      \'type\' => \'page\',
      \'language\' => \'und\',
      \'created\' => \'1450800140\',
      \'changed\' => \'1450800140\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'329a2134-140a-4447-a59f-389948bef2ba\',
      \'revision_timestamp\' => \'1450800140\',
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
      \'last_comment_timestamp\' => \'1450800140\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'islandora\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'3\',
        \'source\' => \'node/5\',
        \'alias\' => \'make-contact\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'6\',
      \'uid\' => \'1\',
      \'title\' => \'About\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'97667383-3f6c-4db7-a93c-c5112ae72e99\',
      \'nid\' => \'6\',
      \'type\' => \'page\',
      \'language\' => \'und\',
      \'created\' => \'1450800140\',
      \'changed\' => \'1450800140\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'3dfbfeaf-cb77-4ac0-b16f-145af17649b5\',
      \'revision_timestamp\' => \'1450800140\',
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
      \'last_comment_timestamp\' => \'1450800140\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'islandora\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'4\',
        \'source\' => \'node/6\',
        \'alias\' => \'about\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'7\',
      \'uid\' => \'1\',
      \'title\' => \'Search the Repo\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'f436b187-2bf5-4484-bb57-b79dee365a0e\',
      \'nid\' => \'7\',
      \'type\' => \'page\',
      \'language\' => \'und\',
      \'created\' => \'1450800140\',
      \'changed\' => \'1450800140\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'6790d072-e293-4a54-aa4e-113c0350d41a\',
      \'revision_timestamp\' => \'1450800140\',
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
      \'last_comment_timestamp\' => \'1450800140\',
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
      \'title\' => \'Footer Logo\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'4e58a48a-6a98-404f-8faa-b86676447c44\',
      \'nid\' => \'8\',
      \'type\' => \'image_block\',
      \'language\' => \'und\',
      \'created\' => \'1450800140\',
      \'changed\' => \'1450800140\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'847549c5-2502-4938-8fbb-4ea35e2f4815\',
      \'revision_timestamp\' => \'1450800140\',
      \'revision_uid\' => \'1\',
      \'body\' => array(),
      \'field_image_block\' => array(
        \'und\' => array(
          array(
            \'fid\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'dgi-footer-logo.png\',
            \'uri\' => \'public://dgi-footer-logo.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'2191\',
            \'status\' => \'1\',
            \'timestamp\' => \'1450800150\',
            \'uuid\' => \'ad9a4d02-bb15-4b1a-bd50-8bcb3ddd573b\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'130\',
            \'height\' => \'34\',
            \'node_export_file_data\' => \'iVBORw0KGgoAAAANSUhEUgAAAIIAAAAiCAYAAACTHwETAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAACDFJREFUeNrsWk2PGkcQnbVyyclwziGI/QGLBTlFkbEC58yFlRJFMif2lnCDmzkyl4jktnMxkaJEWi5Eyg0iYUW5gcz+ACP8Bwz+BZsq9Mp62+rhY72ObO+01Nqhu7q6+tWr6prRHl1dXQVpS9u9FIK0pURIW0qEtN2QCA++/OpcelpQ/M/t61+q59Kv3tuMIKQYaU9dlV4NafuI2icJ0Z6XP+fSK9IX0mOPWMXGRV6fW9KLmJtJj57/+88Y81nM16TnMT+Q+QjzDfnTwHrdT9e1ZX4lc1N5zsrzscfOV6pL5qryXCMbVqrfdED2Cvbq3j8hCD6zedL5QtfLeInScwv2me0x9mn8/cPoiOR0vgtsspBti8yYZNgO1RvLfLRlH991YXg2sI9iFomemK8UzJcgWyHfnIrsamtGAAmmMKatG8CBtQTSKCAjgH8q/QzPF0oAkGAKowaYV2O6MteS3gXpFpgbYK8p1urh8iAb72sgRKpH94PeM9hcIR3WanDUX9I/dc+EPfLsAAH0AmtmZJ85wXXOFASJIKtjI5krOrCZHQPo3baPD/cR9rd9lGhaS3QTZFfw5QC4XOyTEVo4QEmiYoGxGPVAJSEzaDuj6BoooRDRXYCr+mYEuoE9RfZo09wA4y0c1tg9pn0bIM8Ch/XpeEGABZCtwq4vMBc7OjUbxHBOBY7QaGuTXCRz1/DQCJOxGLIrrJ/hHDVzONtBcsV990HWUPmSyM5oXHV21QYZX5COEv9G1qrsUyOo0JhIwMb7mjlnigjfbELra9DHQAT4bQbFnjnVWwO5dL5m0Y0sVLRxA83RYVcMR9SMyLpJ72YvMmHNsaXosy8JD3UiCJHHbztz1hGdOam5csA+m4BgEjhra45Ne/nRlxHyTuRtbeo0AbGK6O0C1BUiNNqhL++QxjWYAWpQdDdo3NLhK9n3kPoophQ/dnRes88DZtKr3hsM5HmVdMcn4bDnPiqb3/JKmb+tt4bVocq0KNSCTboWTlUA20W0LbboW1A0+g60oAwxI2fVUGyuYG+A+qSa0H02W0FZw/4NTyZcUDrdRQK799soII+3ZFEf5nvtA9nZlrNGt0UEdWLF45x8QrGYZVmQ4pRS6wD6Kp7CbEzpzi1AK1jLEaxF4zlSbexcTXns/aarI+zNZUtWCFA8ZT0gznz2JeBRQVRHVjNwFb+jjQ/YZ2BvV/o2wh1ji5sQwXc1tHGoEQq6Fb3SBAnFZQOyYwBaowMu8PsCMgt79aK3khbINMY+VghGRLAYhWeDHax/ZTxCBioSqBVEe8mtT5xrbWyvyS5pFFyJ0k31jmi18zU8977KNfDaFm9xbOCpLQ7Zx/wzFdkI/mHMS7eSEZAaq3BEF44eONHJ8m16XbtAhZ9FdW7FWYkKu3MQQd/xrdI/AwHOLe3jLWPlAdtXXLo6rtmwA4OBr9gkJ50C/CLZF7l4ICJPITeC7GxfRxywD+PZgmzLvg/c9IPS0V3/fwTJCBcg8bGHeJt725duZXzzoUvmjj/aL4t3hAANSqmRjwT2QQbv6APnFa74NhGYEuH9afbaGfOHKE87pVfjLFft/On4Q29H6b+qpS3p9TFtd7DtvBq+/e77nPypS+//8ftvS4wV5E/IY++q6f5vu4foKMufMn5ORN+E5jL6V8bWt2WDyHdEvrMFS21DkZl/SBmhKf2J9BwB19exd00CtB4AfJvWMfvVdtHXZ/1EEp9T7bwbQkmf7CCBBYk7rgRQx2cw/xxjBweG9OUNAyKUPrxpsahGv3SA08NcEst1TCNKNykLQZoy3gT42jvGfjUG5BpCzyYyIB8C9AKyzQY4JRzWFaBPo7pPwHcAstqwtjlqKtPEPmqr6isjM6j+IRxuhOnB5jJ+z7FPn84wISx0vC7yIUg18WSCp/qyQjjUYa892+8O7CwApyUyVgc2bnDTNXpOzT7Yc4kzrn1YQV/PMHOz0b1dDKKDmsEhjLHDTuCECREiwMEyGFegC0jRfQLwiUMOi84fzVkOIQ3kHqIzZ/op8n3pOLCD4wrQ5zKALdNac3YH9tm+awC9ho28Zx+2Z4h0bspXLP5k8NU5IGDTOXuf9JiDQ8gF+K0yE5DgCewJzdFYdw0rCxLILA+9Guqk3BgVUpSUEYEdROGcQDiRMWWtrvkcIIRg/BC6XmO8TuN6uJdwGEeXRXWf9giRUfq4k9duNEKH6xgjEDutjqgeAug5rZ/AnhwylT4/hD0WFJMtRAgSxgIHE93rhPY1XCdEYsuiSxDoGQVkjtZewwrybP9+REAkfUMMVaB7SKcMbg7RnjEQQJBnlLovCaQCAWA6ODLDBFBPKKIeWlpXGd0b9mY8dUuByYH6YE3nsLn7jg1ztgH61w6IfJYJMMh5ikC1qW6FKe75nEMG03fpOTs/P6Ri9z5lqB6I4cUKflgmFcX3dmSDXwGs9jnuKU61S2LjkphXcCOK0uhj0TGnA9j6xyiCOs5aH7E4Ck4oE/kKuQJS6wT6cwQ826Y6n8K2b+BYdr450cC+xJU3Jxu82QCRucZZhpAJKVM8xrievekhFDv/NeocbT9jTYgg3RaEgdUWhxJhSHfukAy3lM1OD+mvyffcZwDyACQrULbRAz+i+9gOHWKPOb12LYn5Aa0bJhChA/kOCtkyZY0mnJOBjY8wZlfW2s6E30ycMtUtj0CWJdnpkqFgV608Z3Bl6ngTmPRgH+t/80XcIXaf1lrhXSYsuZ6oO/bP38svi+QEfs+v77m2Q9V2ACDXN7ChQMVihu7XO9PST8xpSz8xpy0lQtpSIqTN1/4TYAD5qt40jl0tsAAAAABJRU5ErkJggg==\',
          ),
        ),
      ),
      \'field_image_link\' => array(),
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
      \'last_comment_timestamp\' => \'1450800140\',
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
      \'title\' => \'Welcome to our Digital Archive\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'eaea4d5c-8206-482e-a95d-24975b39a4b6\',
      \'nid\' => \'9\',
      \'type\' => \'image_block\',
      \'language\' => \'und\',
      \'created\' => \'1450800140\',
      \'changed\' => \'1450800140\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'9c8f491e-d901-4fc8-9b5d-75490185bdd6\',
      \'revision_timestamp\' => \'1450800140\',
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
      \'field_image_link\' => array(),
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
      \'last_comment_timestamp\' => \'1450800140\',
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
      \'title\' => \'Islandora Advanced Search\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'e6b92772-5ec2-418b-9e9a-577156def660\',
      \'nid\' => \'10\',
      \'type\' => \'page\',
      \'language\' => \'und\',
      \'created\' => \'1450800140\',
      \'changed\' => \'1450800140\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'c4f960eb-e02b-4b17-9ef3-ab0e5931ac0f\',
      \'revision_timestamp\' => \'1450800140\',
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
      \'last_comment_timestamp\' => \'1450800140\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'islandora\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'5\',
        \'source\' => \'node/10\',
        \'alias\' => \'advanced-search\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'11\',
      \'uid\' => \'1\',
      \'title\' => \'Help\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'baf51d8b-70ca-42b4-82f2-db9754d95038\',
      \'nid\' => \'11\',
      \'type\' => \'page\',
      \'language\' => \'en\',
      \'created\' => \'1450800140\',
      \'changed\' => \'1450800140\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'d7790073-bf40-44fb-8bc5-572b646532d6\',
      \'revision_timestamp\' => \'1450800140\',
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
      \'last_comment_timestamp\' => \'1450800140\',
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
      \'vid\' => \'12\',
      \'uid\' => \'1\',
      \'title\' => \'Support\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'e25ccc26-c4ef-4578-b1e0-31e791fc9928\',
      \'nid\' => \'12\',
      \'type\' => \'page\',
      \'language\' => \'en\',
      \'created\' => \'1450800140\',
      \'changed\' => \'1450800140\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'db02d4f6-92fc-4539-ac8a-77d5da620c8e\',
      \'revision_timestamp\' => \'1450800140\',
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
      \'last_comment_timestamp\' => \'1450800140\',
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
      \'vid\' => \'13\',
      \'uid\' => \'1\',
      \'title\' => \'Policies\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'f1c3f843-cb61-41c8-9eb1-74da357c68cf\',
      \'nid\' => \'13\',
      \'type\' => \'page\',
      \'language\' => \'und\',
      \'created\' => \'1450800140\',
      \'changed\' => \'1450800140\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'dd9db579-7172-436d-a740-721ec9a68523\',
      \'revision_timestamp\' => \'1450800140\',
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
      \'last_comment_timestamp\' => \'1450800140\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'islandora\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'6\',
        \'source\' => \'node/13\',
        \'alias\' => \'policies\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'14\',
      \'uid\' => \'1\',
      \'title\' => \'Add Publication\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'61f1f482-6f82-4b12-b36c-78f8216e6baa\',
      \'nid\' => \'14\',
      \'type\' => \'page\',
      \'language\' => \'en\',
      \'created\' => \'1450800140\',
      \'changed\' => \'1450800140\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'e31e0d72-8a38-4d73-8cdf-b6faed4da6ea\',
      \'revision_timestamp\' => \'1450800140\',
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
      \'last_comment_timestamp\' => \'1450800140\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'islandora\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'7\',
        \'source\' => \'node/14\',
        \'alias\' => \'add-publication\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
)',
);
  return $node_export;
}
