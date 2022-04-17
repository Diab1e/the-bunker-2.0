const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#151315", /* black   */
  [1] = "#3B5DA4", /* red     */
  [2] = "#943A9C", /* green   */
  [3] = "#2CB2C9", /* yellow  */
  [4] = "#F19893", /* blue    */
  [5] = "#DECCB7", /* magenta */
  [6] = "#A8C0C6", /* cyan    */
  [7] = "#e8e8e4", /* white   */

  /* 8 bright colors */
  [8]  = "#a2a29f",  /* black   */
  [9]  = "#3B5DA4",  /* red     */
  [10] = "#943A9C", /* green   */
  [11] = "#2CB2C9", /* yellow  */
  [12] = "#F19893", /* blue    */
  [13] = "#DECCB7", /* magenta */
  [14] = "#A8C0C6", /* cyan    */
  [15] = "#e8e8e4", /* white   */

  /* special colors */
  [256] = "#151315", /* background */
  [257] = "#e8e8e4", /* foreground */
  [258] = "#e8e8e4",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
