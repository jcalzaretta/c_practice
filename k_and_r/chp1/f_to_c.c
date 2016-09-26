#include <stdio.h>

/* print Farenheit-Celsius table
 * for fahr = 0, 20, ..., 300 */

main() {
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;    /* lower limit of temperature table */
  upper = 300;  /* upper limit */
  step = 20;    /* step size */

  fahr = lower;
  printf("farenheit\tcelsius\n");
  printf("=========\t=======\n");
  while (fahr <= upper) {
    celsius = (5.0 / 9.0) * (fahr - 32.0);
    printf("%3.0f\t\t%6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
}
