static const char norm_fg[] = "#cfc4bf";
static const char norm_bg[] = "#150f0f";
static const char norm_border[] = "#908985";

static const char sel_fg[] = "#cfc4bf";
static const char sel_bg[] = "#857D39";
static const char sel_border[] = "#cfc4bf";

static const char urg_fg[] = "#cfc4bf";
static const char urg_bg[] = "#76675D";
static const char urg_border[] = "#76675D";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
