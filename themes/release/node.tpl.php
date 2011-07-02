<?php // $Id: node.tpl.php,v 1.5 2009/11/03 22:22:04 jmburnz Exp $ 

/**
 * @file node.tpl.php
 *
 * Theme implementation to display a node.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 */
?>
<div id="node-<?php print $node->nid; ?>" class="node <?php print $node_classes; ?>">

  <?php if (!$page): ?>	
    <h2><a href="<?php print $node_url; ?>" rel="bookmark"><?php print $title; ?></a></h2>
  <?php endif; ?>
	
  <?php if ($unpublished): ?>
    <div class="unpublished"><?php print t('Unpublished'); ?></div>
  <?php endif; ?>

 <?php if ($submitted): ?>
    <h3 class="meta">
      <em><?php print t('by'); ?> <?php print $name; ?></em>
      <?php print t('posted'); ?>
      <abbr title="<?php print format_date($node->created, 'custom', "l, F j, Y - H:i"); ?>">
        <?php print format_date($node->created, 'custom', "m.d.y"); ?>
      </abbr>
      <?php if ($terms): ?>
        <?php print t('in'); ?>
        <div class="tags"><?php print $terms; ?></div>
      <?php endif; ?>
    </h3>
  <?php endif; ?>

  <?php if ($node->type != 'poll'): ?>
    <?php print $picture; ?>
  <?php endif; ?>

  <?php if ($node->type == 'release_article'): ?>
      <?php if (!empty($content))
            {
                $page = $_GET['page'] - 1;
                if (empty($page) || $page < 0) {$page = 0;}

                if ($page === 0 && !empty($node->field_introduction[0]['value']))
                {
                    print '<div class="article-introduction"><p>'.$node->field_introduction[0]['value'].'</p></div>';
                }

                if (!empty($node->field_image[$page]['filepath']))
                {
                    print views_embed_view('release_article_image', 'default', array($node->nid, $page));
                }
            }
            else
            {
                print '<div class="page-error">Invalid page number for this article.</div>';
            }
      ?>
  <?php endif; ?>

  <?php print $content; ?>

  <?php if ($links): ?>
    <div class="actions"><?php print $links; ?></div>
  <?php endif; ?>
 
  <?php if ($node_region && $page): ?>
    <div class="node-region"><?php print $node_region; ?></div>
  <?php endif; ?>

</div> <!-- /node -->
