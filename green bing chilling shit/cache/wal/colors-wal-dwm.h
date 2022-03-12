static const char norm_fg[] = "#dee9cd";
static const char norm_bg[] = "#01050C";
static const char norm_border[] = "#9ba38f";

static const char sel_fg[] = "#dee9cd";
static const char sel_bg[] = "#BAE278";
static const char sel_border[] = "#dee9cd";

static const char urg_fg[] = "#dee9cd";
static const char urg_bg[] = "#B2DA6F";
static const char urg_border[] = "#B2DA6F";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
