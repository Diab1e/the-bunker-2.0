const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#181c14", /* black   */
  [1] = "#8ABB0C", /* red     */
  [2] = "#3B54A9", /* green   */
  [3] = "#1C70EF", /* yellow  */
  [4] = "#3E84ED", /* blue    */
  [5] = "#649CF2", /* magenta */
  [6] = "#90B5F2", /* cyan    */
  [7] = "#cbdbf0", /* white   */

  /* 8 bright colors */
  [8]  = "#8e99a8",  /* black   */
  [9]  = "#8ABB0C",  /* red     */
  [10] = "#3B54A9", /* green   */
  [11] = "#1C70EF", /* yellow  */
  [12] = "#3E84ED", /* blue    */
  [13] = "#649CF2", /* magenta */
  [14] = "#90B5F2", /* cyan    */
  [15] = "#cbdbf0", /* white   */

  /* special colors */
  [256] = "#181c14", /* background */
  [257] = "#cbdbf0", /* foreground */
  [258] = "#cbdbf0",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
