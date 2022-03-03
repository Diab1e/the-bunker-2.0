const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#01050C", /* black   */
  [1] = "#B2DA6F", /* red     */
  [2] = "#BAE278", /* green   */
  [3] = "#444A86", /* yellow  */
  [4] = "#B9DC85", /* blue    */
  [5] = "#BCE485", /* magenta */
  [6] = "#C6EA8E", /* cyan    */
  [7] = "#dee9cd", /* white   */

  /* 8 bright colors */
  [8]  = "#9ba38f",  /* black   */
  [9]  = "#B2DA6F",  /* red     */
  [10] = "#BAE278", /* green   */
  [11] = "#444A86", /* yellow  */
  [12] = "#B9DC85", /* blue    */
  [13] = "#BCE485", /* magenta */
  [14] = "#C6EA8E", /* cyan    */
  [15] = "#dee9cd", /* white   */

  /* special colors */
  [256] = "#01050C", /* background */
  [257] = "#dee9cd", /* foreground */
  [258] = "#dee9cd",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
