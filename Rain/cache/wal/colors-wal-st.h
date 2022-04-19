const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0e090b", /* black   */
  [1] = "#6E2D2B", /* red     */
  [2] = "#4A3E43", /* green   */
  [3] = "#62555C", /* yellow  */
  [4] = "#962925", /* blue    */
  [5] = "#EF322A", /* magenta */
  [6] = "#B35850", /* cyan    */
  [7] = "#b9b8bb", /* white   */

  /* 8 bright colors */
  [8]  = "#818082",  /* black   */
  [9]  = "#6E2D2B",  /* red     */
  [10] = "#4A3E43", /* green   */
  [11] = "#62555C", /* yellow  */
  [12] = "#962925", /* blue    */
  [13] = "#EF322A", /* magenta */
  [14] = "#B35850", /* cyan    */
  [15] = "#b9b8bb", /* white   */

  /* special colors */
  [256] = "#0e090b", /* background */
  [257] = "#b9b8bb", /* foreground */
  [258] = "#b9b8bb",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
