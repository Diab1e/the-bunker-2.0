static const char norm_fg[] = "#b9b8bb";
static const char norm_bg[] = "#0e090b";
static const char norm_border[] = "#818082";

static const char sel_fg[] = "#b9b8bb";
static const char sel_bg[] = "#4A3E43";
static const char sel_border[] = "#b9b8bb";

static const char urg_fg[] = "#b9b8bb";
static const char urg_bg[] = "#6E2D2B";
static const char urg_border[] = "#6E2D2B";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
