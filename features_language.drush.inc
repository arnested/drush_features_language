<?php

/**
 * Implements hook_drush_help_alter().
 *
 * All features commands should be run with the default language set to English.
 */
function features_language_drush_help_alter(&$command) {
  if (substr($command['command'], 0, 8) == 'features') {
    global $conf;
    global $language;

    $conf['language_default'] = NULL;
    $language = language_default();
  }
}
