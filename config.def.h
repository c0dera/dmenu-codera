/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int instant = 1;
static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;                       /* -F option, fuzzy matching disabled if 0 */
static int centered = 1;                    /* -c option; centers dmenu on screen */
static int min_width = 900;                    /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Iosevka:size=12"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char nord0[]       = "#2e3440";
static const char nord1[]       = "#3b4252";
static const char nord2[]       = "#434c5e";
static const char nord3[]       = "#4c566a";
static const char nord4[]       = "#d8dee9";
static const char nord5[]       = "#e5e9f0";
static const char nord6[]       = "#eceff4";
static const char nord7[]        = "#8fbcbb";
static const char nord8[]        = "#88c0d0";
static const char nord9[]        = "#81a1c1";
static const char nord10[]        = "#5e81ac";
static const char nord11[]        = "#bf616a";
static const char nord12[]        = "#d08770";
static const char nord13[]        = "#ebcb8b";
static const char nord14[]        = "#a3be8c";
static const char nord15[]        = "#b48ead";
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { nord4, nord0 },
	[SchemeSel] = { nord6, nord10 },
	[SchemeSelHighlight] = { nord13, nord10 },
	[SchemeNormHighlight] = { nord13, nord0 },
	[SchemeOut] = { nord6, nord1 },
	[SchemeMid] = { nord10, nord1 },
};
/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines      = 25;
static unsigned int columns    = 4;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* -n option; preselected item starting from 0 */
static unsigned int preselected = 0;
