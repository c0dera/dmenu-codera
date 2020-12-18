/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int instant = 1;
static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;                       /* -F option, fuzzy matching disabled if 0 */
static int centered = 0;                    /* -c option; centers dmenu on screen */
static int min_width = 900;                    /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Iosevka:size=12"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char red[]       = "#cc241d";
static const char green[]     = "#98971a";
static const char yellow[]    = "#d79921";
static const char blue[]      = "#458588";
static const char purple[]    = "#b16286";
static const char aqua[]      = "#689d6a";
static const char gray0[]      = "#a89984";
static const char gray1[]      = "#928374";
static const char bg0[]        = "#282828";
static const char bg1[]        = "#3c3836";
static const char bg2[]       = "#504945";
static const char bg3[]       = "#665c54";
static const char bg4[]       = "#7c6f64";
static const char fg0[]        = "#fbf1c7";
static const char fg1[]        = "#ebdbb2";
static const char fg2[]       = "#d5c4a1";
static const char fg3[]       = "#bdae93";
static const char fg4[]       = "#a89984";
static const char orange[]    = "#d65d0e";
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { fg0, bg0 },
	[SchemeSel] = { fg0, orange },
	[SchemeSelHighlight] = { green, bg0 },
	[SchemeNormHighlight] = { green, bg0 },
	[SchemeOut] = { fg0, bg0 },
	[SchemeMid] = { red, bg0 },
};
/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines      = 0;
static unsigned int maxhist    = 64;
static int histnodup           = 1;	/* if 0, record repeated histories */
/* -h option; minimum height of a menu line */
static unsigned int lineheight = 35;
static unsigned int min_lineheight = 10;
static unsigned int columns    = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static const unsigned int border_width = 0;

/* -n option; preselected item starting from 0 */
static unsigned int preselected = 0;
