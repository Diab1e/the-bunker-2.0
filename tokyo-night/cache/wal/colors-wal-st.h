const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0e0f1e", /* black   */
  [1] = "#B02354", /* red     */
  [2] = "#063589", /* green   */
  [3] = "#2D328D", /* yellow  */
  [4] = "#0A51A1", /* blue    */
  [5] = "#4550A9", /* magenta */
  [6] = "#AD5E98", /* cyan    */
  [7] = "#85c4e6", /* white   */

  /* 8 bright colors */
  [8]  = "#5d89a1",  /* black   */
  [9]  = "#B02354",  /* red     */
  [10] = "#063589", /* green   */
  [11] = "#2D328D", /* yellow  */
  [12] = "#0A51A1", /* blue    */
  [13] = "#4550A9", /* magenta */
  [14] = "#AD5E98", /* cyan    */
  [15] = "#85c4e6", /* white   */

  /* special colors */
  [256] = "#0e0f1e", /* background */
  [257] = "#85c4e6", /* foreground */
  [258] = "#85c4e6",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
