#include <stdio.h>

#define LOWER 0		/* lower limit */
#define UPPER 300	/* upper limit */
#define STEP 20		/* step size */

/*print Fahrenheit-Celsius table */

/* prototype */
float convert(int fahr);

float convert(int fahr) {
  return (5.0 / 9.0) * (fahr - 32);
}

main() {
  int fahr;
  for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
    printf("%3d %6.1f\n", fahr, convert(fahr));
}
