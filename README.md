# Drush features language

A small hack to unset a sites default language when running `drush
features-*` commands.

This is to avoid having translated strings etc. in your exported code.

## You shouldn't have the need for this anymore!
Use [features](https://www.drupal.org/project/features) [7.x-2.7](https://www.drupal.org/node/2592441) or newer -- see [#1988252](https://www.drupal.org/node/1988252).
