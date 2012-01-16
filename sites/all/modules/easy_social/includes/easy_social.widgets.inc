<?php

/**
 * @file Easy Social default widget markup functions
 */

/**
 * Generate the needed markup for the facebook share link
 * @param $url The url to be shared
 * @param $type Generate horizontal or vertical widgets
 * @param $title The title to be shared
 * @return string the html markup
 */
function _easy_social_widget_facebook_markup($url, $type, $title = NULL, $lang = 'en') {
  // correct for different language identification strings
  if ($lang === 'en') {
    $lang = 'en_US';
  }
  elseif ($lang === 'en-gb') {
    $lang = 'en_GB';
  }

  // @TODO subscribe to the 'edge.create' event through FB.Event.subscribe to track successful shares
  // this will likely be in either a seperate module or a new version

  if ($type == EASY_SOCIAL_WIDGET_HORIZONTAL) {
    $width = variable_get_value('easy_social_facebook_width_horizontal');
    $type_box = 'button_count';
    $height = '21';
  }
  else {
    $width = variable_get_value('easy_social_facebook_width_vertical');
    $type_box = 'box_count';
    $height = '90';
  }

  $appid = variable_get_value('easy_social_facebook_appid');
  $facebook_type = variable_get_value('easy_social_facebook_widget_type');
  $send_button = variable_get_value('easy_social_facebook_send_button') ? 'true' : 'false';
  $show_faces = variable_get_value('easy_social_facebook_show_faces') ? 'true' : 'false';
  $action = variable_get_value('easy_social_facebook_verb');
  $color_scheme = variable_get_value('easy_social_facebook_color_scheme');
  $font = variable_get_value('easy_social_facebook_font');

  if ($font === 'default') {
    $font = '';
  }

  if ($facebook_type !== 'iframe') {
    // this is done here instead of using the proper hook method because the script is only added in the HTMl5 and XFBML versions, not iframe
    $script = <<<JS
(function(d, s, id) {
  var js, fjs = d.getElementsByTagName(s)[0];
  if (d.getElementById(id)) {return;}
  js = d.createElement(s); js.id = id;
  js.src = "//connect.facebook.net/{$lang}/all.js#xfbml=1&appId={$appid}";
  fjs.parentNode.insertBefore(js, fjs);
}(document, 'script', 'facebook-jssdk'));
JS;
    drupal_add_js($script, 'inline');
  }

  if ($facebook_type === 'html5') {
    $markup = <<<FB
<div class="fb-like" data-href="{$url}" data-send="{$send_button}" data-layout="{$type_box}" data-width="{$width}" data-show-faces="{$show_faces}" data-action="{$action}" data-colorscheme="{$color_scheme}" data-font="{$font}"></div>
FB;
  }
  elseif ($facebook_type === 'xfbml') {
    $markup = <<<FB
<fb:like href="{$url}" send="{$send_button}" layout="{$type_box}" width="{$width}" show_faces="{$show_faces}" action="{$action}" colorscheme="{$color_scheme}" font="{$font}"></fb:like>
FB;
  }
  else {
    $url = drupal_encode_path($url);
    $font = drupal_encode_path($font);

    $markup = <<<FB
<iframe src="//www.facebook.com/plugins/like.php?locale={$lang}&amp;href={$url}&amp;send=false&amp;layout={$type_box}&amp;width={$width}&amp;show_faces={$show_faces}&amp;action={$action}&amp;colorscheme={$color_scheme}&amp;font={$font}&amp;height={$height}&amp;appId={$appid}" scrolling="no" frameborder="0" style="border:none; overflow:hidden; width:{$width}px; height:{$height}px;" allowTransparency="true"></iframe>
FB;
  }
  return $markup;
}

/**
 * Generate the needed markeup for the googleplus share link
 * @param $url The url to be shared
 * @param $type Generate horizontal or vertical widgets
 * @param $title The title to be shared
 * @return string the html markup
 */
function _easy_social_widget_googleplus_markup($url, $type, $title = NULL, $lang = 'en') {
  // this widget doesn't yet offer a localization option
  // correct for different language identification strings
//  if ($lang === 'en') {
//    $lang = 'en_US';
//  }
  // @TODO use "callback" to track successful shares
  // this will likely be in either a seperate module or a new version

  $annotation = variable_get_value('easy_social_googleplus_annotation');
  $type = ($type == EASY_SOCIAL_WIDGET_HORIZONTAL) ? 'medium' : 'tall';
  $html5 = variable_get_value('easy_social_googleplus_html5');

  if ($html5) {
    $markup = <<<GP
<div class="g-plusone" data-size="{$type}" data-annotation="{$annotation}" data-href="{$url}"></div>
GP;
  }
  else {
    $markup = <<<GP
<g:plusone size="{$type}" href="{$url}" annotation="{$annotation}"></g:plusone>
GP;
  }
  return $markup;
}

/**
 * Generate the needed markeup for the linkedin share link
 * @param $url The url to be shared
 * @param $type Generate horizontal or vertical widgets
 * @param $title The title to be shared
 * @return string the html markup
 */
function _easy_social_widget_linkedin_markup($url, $type, $title = NULL, $lang = 'en') {
  // this widget doesn't yet offer a localization option
  // correct for different language identification strings
//  if ($lang === 'en') {
//    $lang = 'en_US';
//  }
  // @TODO use "data-onsuccess" to track successful shares
  // this will likely be in either a seperate module or a new version

  $type = ($type == EASY_SOCIAL_WIDGET_HORIZONTAL) ? 'right' : 'top';
  $markup = <<<LI
<script type="in/share" data-url="{$url}" data-counter="{$type}"></script>
LI;
  return $markup;
}

/**
 * Generate the needed markup for the twitter share link
 * @param $url The url to be shared
 * @param $type Generate horizontal or vertical widgets
 * @param $title The title to be shared
 * @return string the html markup
 */
function _easy_social_widget_twitter_markup($url, $type, $title = NULL, $lang = 'en') {
  // correct for different language identification strings
  if ($lang === 'en-gb') {
    $lang = 'en';
  }
  elseif ($lang === 'pt-br' || $lang === 'pt-pt') {
    $lang = 'pt';
  }

  $type = ($type == EASY_SOCIAL_WIDGET_HORIZONTAL) ? 'horizontal' : 'vertical';

  $account_via = variable_get_value('easy_social_twitter_account_via');
  $account_related = variable_get_value('easy_social_twitter_account_related');
  $account_related_description = variable_get_value('easy_social_twitter_account_description');

  $markup = <<<TT
<a href="http://twitter.com/share" class="twitter-share-button" 
data-url="{$url}" 
data-count="{$type}"
data-lang = "{$lang}"
data-via="{$account_via}" 
data-related="{$account_related}:{$account_related_description}"
data-text="{$title}">Tweet</a>
TT;
  return $markup;
}