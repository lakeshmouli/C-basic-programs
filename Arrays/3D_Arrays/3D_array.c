#include <stdio.h>

 int main()

 {

 int test[2][3][2];

 printf("Enter 12 values: \n");

 for (int i = 0; i < 2; ++i)

 {

 for (int j = 0; j < 3; ++j)

 {

 for (int k = 0; k < 2; ++k)

 {

 scanf("%d", &test[i][j][k]);

 }

 }

 }

 // Printing values with proper index

 printf("\nDisplaying values:\n");

 for (int i = 0; i < 2; ++i)

 {

 for (int j = 0; j < 3; ++j)

 {

 for (int k = 0; k < 2; ++k)

 {

 printf("test[%d][%d][%d] = %d\n", i, j, k, test[i][j][k]);

 }

 }

 }

 return 0;

 }

/*Output:

Enter 12 values: 

1

2

3

4

5

6

7

8

9

10

11

12

Displaying Values:

test[0][0][0] = 1

test[0][0][1] = 2

test[0][1][0] = 3

test[0][1][1] = 4

test[0][2][0] = 5

test[0][2][1] = 6

test[1][0][0] = 7

test[1][0][1] = 8

test[1][1][0] = 9

test[1][1][1] = 10

test[1][2][0] = 11

test[1][2][1] = 12*/
