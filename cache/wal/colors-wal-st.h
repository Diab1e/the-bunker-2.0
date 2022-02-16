const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#150f0f", /* black   */
  [1] = "#76675D", /* red     */
  [2] = "#857D39", /* green   */
  [3] = "#8E7166", /* yellow  */
  [4] = "#97903B", /* blue    */
  [5] = "#A18777", /* magenta */
  [6] = "#847A85", /* cyan    */
  [7] = "#cfc4bf", /* white   */

  /* 8 bright colors */
  [8]  = "#908985",  /* black   */
  [9]  = "#76675D",  /* red     */
  [10] = "#857D39", /* green   */
  [11] = "#8E7166", /* yellow  */
  [12] = "#97903B", /* blue    */
  [13] = "#A18777", /* magenta */
  [14] = "#847A85", /* cyan    */
  [15] = "#cfc4bf", /* white   */

  /* special colors */
  [256] = "#150f0f", /* background */
  [257] = "#cfc4bf", /* foreground */
  [258] = "#cfc4bf",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
