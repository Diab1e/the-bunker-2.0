const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#3f2728", /* black   */
  [1] = "#E8B7B6", /* red     */
  [2] = "#D8C4BA", /* green   */
  [3] = "#E6C2BD", /* yellow  */
  [4] = "#EABEC2", /* blue    */
  [5] = "#DCD3CB", /* magenta */
  [6] = "#E9CDCC", /* cyan    */
  [7] = "#efe7e6", /* white   */

  /* 8 bright colors */
  [8]  = "#a7a1a1",  /* black   */
  [9]  = "#E8B7B6",  /* red     */
  [10] = "#D8C4BA", /* green   */
  [11] = "#E6C2BD", /* yellow  */
  [12] = "#EABEC2", /* blue    */
  [13] = "#DCD3CB", /* magenta */
  [14] = "#E9CDCC", /* cyan    */
  [15] = "#efe7e6", /* white   */

  /* special colors */
  [256] = "#3f2728", /* background */
  [257] = "#efe7e6", /* foreground */
  [258] = "#efe7e6",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
