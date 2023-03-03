/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int min_width = 550;  /* minimum width when centered */
static int centered  = 0;    /* -c option; centers dmenu on screen */
static int topbar    = 1;    /* -b  option; if 0, dmenu appears at bottom  */
static int fuzzy     = 1;    /* -F  option; if 0, dmenu doesn't use fuzzy matching */

/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
    "CaskaydiaCove Nerd Font:style=Regular:size=9:antialias=true"
};

static const char *prompt = ">";
static const char *colors[SchemeLast][2] = {
	                      /*     fg         bg     */
	[SchemeNorm]          = { "#bbbbbb", "#222222" },
	[SchemeSel]           = { "#eeeeee", "#ab381c" },
	[SchemeOut]           = { "#000000", "#00ffff" },
    [SchemeNormHighlight] = { "#ffc978", "#222222" },
    [SchemeSelHighlight]  = { "#ffc978", "#ab381c" },
    [SchemeOutHighlight]  = { "#ffc978", "#00ffff" }, 
};

/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines = 15;
static unsigned int columns = 3;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
