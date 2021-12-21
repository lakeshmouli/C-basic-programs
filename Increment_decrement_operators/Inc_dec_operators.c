#include <stdio.h>

 main()

 {

 int w, x, y, z, result;

 w = x = y = z = 1; /* initialize x and y */

 printf("Given w = %d, x = %d, y = %d, and z = %d,\n", w, x, y, z);

 result = ++w;

 printf("++w gives: %d\n", result);

 result = x++;

 printf("x++ gives: %d\n", result);

 result = --y;

 printf("--y gives: %d\n", result);

 result = z--;

 printf("z-- gives: %d\n", result);

 return 0;

}
