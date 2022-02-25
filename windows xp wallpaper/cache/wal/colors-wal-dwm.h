static const char norm_fg[] = "#cbdbf0";
static const char norm_bg[] = "#181c14";
static const char norm_border[] = "#8e99a8";

static const char sel_fg[] = "#cbdbf0";
static const char sel_bg[] = "#3B54A9";
static const char sel_border[] = "#cbdbf0";

static const char urg_fg[] = "#cbdbf0";
static const char urg_bg[] = "#8ABB0C";
static const char urg_border[] = "#8ABB0C";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
