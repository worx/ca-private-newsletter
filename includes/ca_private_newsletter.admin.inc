<?php

/**
 * Define the function ca_private_newsletter_admin_settings_form().
 *
 * This function will create the admin settings page.
 */
function ca_private_newsletter_admin_settings_form() {
  $form = array();

  $form['ca_private_newsletter_list'] = array(
    '#type' => 'select',
    '#title' => t('Private Newsletter\'s List Template'),
    '#options' => array(
      'ca_private_newsletter_list_template_one' => t('Template One'),
      'ca_private_newsletter_list_template_two' => t('Template Two'),
      'ca_private_newsletter_list_template_three' => t('Template Three'),
    ),
    '#default_value' => variable_get('ca_private_newsletter_list_template', 'ca_private_newsletter_list_template_one'),
    '#required' => TRUE,
  );
  $form['ca_private_newsletter_node'] = array(
    '#type' => 'select',
    '#title' => t('Private Newsletter\'s Node Template'),
    '#options' => array(
      'ca_private_newsletter_node_template_one' => t('Template One'),
      'ca_private_newsletter_node_template_two' => t('Template Two'),
      'ca_private_newsletter_node_template_three' => t('Template Three'),
    ),
    '#default_value' => variable_get('ca_private_newsletter_node_template', 'ca_private_newsletter_node_template_one'),
    '#required' => TRUE,
  );
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save'),
    '#submit' => array('ca_private_newsletter_admin_settings_form_submit'),
  );

  return $form;
}

/*
 * Define the function ca_private_newsletter_admin_settings_form_submit().
 *
 * This function will save the admin settings page.
 */
function misc_admin_settings_form_submit($form, &$form_state) {
  variable_set('ca_private_newsletter_list_template', $form_state['values']['ca_private_newsletter_list']);
  variable_set('ca_private_newsletter_node_template', $form_state['values']['ca_private_newsletter_node']);
  drupal_set_message('Configuration has been saved.');
}