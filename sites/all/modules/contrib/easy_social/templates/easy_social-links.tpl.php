<?php
/**
 * @file Easy Social links template
 *
 * Variables available:
 * - $widgets array with my share buttons html markup.
 * - $widget_type int constant indicating widget type
 */
?>
<div class="easy_social_box clearfix <?php echo ($widget_type == EASY_SOCIAL_WIDGET_HORIZONTAL) ? 'horizontal' : 'vertical'; ?> easy_social_lang_<?php echo $lang; ?>">
  <?php
    $i = 0;
    $n = count($widgets);
  ?>
  <?php foreach ($widgets as $name => $markup): ?>
    <?php
    if ($i++ === 0) {
      $class = ' first';
    } else if ($i === $n) {
      $class = ' last';
    } else {
      $class = '';
    }
    ?>
    <div class="easy_social-widget easy_social-widget-<?php echo $name; ?><?php echo $class; ?>"><?php echo $markup; ?></div>
  <?php endforeach; ?>
</div><!-- /.easy_social_box -->