static const char norm_fg[] = "#efe7e6";
static const char norm_bg[] = "#3f2728";
static const char norm_border[] = "#a7a1a1";

static const char sel_fg[] = "#efe7e6";
static const char sel_bg[] = "#D8C4BA";
static const char sel_border[] = "#efe7e6";

static const char urg_fg[] = "#efe7e6";
static const char urg_bg[] = "#E8B7B6";
static const char urg_border[] = "#E8B7B6";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
