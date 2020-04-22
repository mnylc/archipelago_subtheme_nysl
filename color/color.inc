<?php

/**
 * @file
 * Lists available colors and color schemes for the Bootstrap Barrio theme.
 */

$info = [
  // Available colors and color labels used in theme.
  'fields' => [   
    'body' => 'Main Body Color',
    'navbar_link' => 'Navigation Bar Link'
    'navbar_background' => 'Navigation Bar Background Color',
    'navbar_secondary' => 'Secondary navigation Bar Background Color', 
    'top' => t('Header background top'),
    'bottom' => t('Header background bottom'),
    'bg' => t('Main background'),
    'sidebar' => t('Sidebar background'),
    'sidebarborders' => t('Sidebar borders'),
    'footer' => t('Footer background'),
    'button' => t('Primary button background'),
    'buttonhover' => t('Primary button hover'),
    'titleslogan' => t('Title and slogan'),
    'text' => t('Text color'),
    'link' => t('Link color'),
    'base' => t('Base color'),
  ],
  // Pre-defined color schemes.
  'schemes' => [
    'default' => [
      'title' => t('Archipelago Default'),
      'colors' => [
        'top' => '#055a8e',
        'bottom' => '#1d84c3',
        'bg' => '#ffffff',
        'body' => '#f2f2f2',
        'sidebar' => '#f6f6f2',
        'sidebarborders' => '#f9f9f9',
        'footer' => '#292929',
        'button' => '#007bff',
        'buttonhover' => '#0256b1',
        'titleslogan' => '#fffeff',
        'text' => '#3b3b3b',
        'navbar_link' => '#b3ffe0'
        'navbar_background' => '#00000',
        'navbar_secondary' => '#2B3A51',
        'link' => '#0071b3',
        'base' => '#4b82bf,
      ],
    ], 
  ],
  // CSS files (excluding @import) to rewrite with new color scheme.
  'css' => [
    'css/colors.css',
  ],

  // Files to copy.
  'copy' => [
    'logo.svg',
  ],

  // Preview files.
  'preview_library' => 'archipelago_subtheme/color.preview',
  'preview_html' => 'color/preview.html',

  // Attachments.
  '#attached' => [
    'drupalSettings' => [
      'color' => [
        // Put the logo path into JavaScript for the live preview.
        'logo' => theme_get_setting('logo.url', 'bartik'),
      ],
    ],
  ],
];
