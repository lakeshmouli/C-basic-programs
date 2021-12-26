#include <stdio.h>

 int main()

 {

 float a[2][2], b[2][2], result[2][2];

 // Taking input using nested for loop

 printf("Enter elements of 1st matrix\n");

 for (int i = 0; i < 2; ++i)

 for (int j = 0; j < 2; ++j)

 {

 printf("Enter a%d%d: ", i + 1, j + 1);

 scanf("%f", &a[i][j]);

 }

 // Taking input using nested for loop

 printf("Enter elements of 2nd matrix\n");

 for (int i = 0; i < 2; ++i)

 for (int j = 0; j < 2; ++j)

 {

 printf("Enter b%d%d: ", i + 1, j + 1);

 scanf("%f", &b[i][j]);

 }

 // adding corresponding elements of two arrays

 for (int i = 0; i < 2; ++i)

 for (int j = 0; j < 2; ++j)

 {

 result[i][j] = a[i][j] + b[i][j];

 }

 // Displaying the sum

 printf("\nSum Of Matrix:");

 for (int i = 0; i < 2; ++i)

 for (int j = 0; j < 2; ++j)

 {

 printf("%.1f\t", result[i][j]);

 /* if (j == 1)

 printf("\n"); */

 }

 return 0;

 }
 Output:

Enter elements of 1st matrix

Enter a11: 2;

Enter a12: 0.5;

Enter a21: -1.1;

Enter a22: 2;

Enter elements of 2nd matrix

Enter b11: 0.2;

Enter b12: 0;

Enter b21: 0.23;

Enter b22: 23;

Sum Of Matrix:

2.2 0.5

-0.9 25.0
