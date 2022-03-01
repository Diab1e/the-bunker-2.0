static const char norm_fg[] = "#85c4e6";
static const char norm_bg[] = "#0e0f1e";
static const char norm_border[] = "#5d89a1";

static const char sel_fg[] = "#85c4e6";
static const char sel_bg[] = "#063589";
static const char sel_border[] = "#85c4e6";

static const char urg_fg[] = "#85c4e6";
static const char urg_bg[] = "#B02354";
static const char urg_border[] = "#B02354";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
