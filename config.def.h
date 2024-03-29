/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static const unsigned int alpha = 0xe0;
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"monospace:size=10",
  "NotoColorEmoji:pixelsize=10:antialias=true:autohint=true"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#c6d0f5", "#292c3c" },
	[SchemeSel] = { "#292c3c", "#8caaee" },
	[SchemeOut] = { "#000000", "#00ffff" },
};

// static const char *colors[SchemeLast][2] = {
// 	/*     fg         bg       */
// 	[SchemeNorm] = { "#cad3f5", "#1e2030" },
// 	[SchemeSel] = { "#c6a0f6", "#363a4f" },
// 	[SchemeOut] = { "#000000", "#00ffff" },


static const unsigned int alphas[SchemeLast][2] = {
	[SchemeNorm] = { OPAQUE, alpha },
	[SchemeSel] = { OPAQUE, alpha },
	[SchemeOut] = { OPAQUE, alpha },
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
