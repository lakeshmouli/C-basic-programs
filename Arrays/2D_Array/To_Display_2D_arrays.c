#include<stdio.h>

int main()

{

 

 int disp[2][3]; /* 2D array declaration*/

 int i, j; /*Counter variables for the loop*/

 

 for(i=0; i<2; i++) /*outer for loop*/

{

 for(j=0;j<3;j++) /*Inner for loop*/

{

 printf("Enter value for disp[%d][%d]:", i, j);

 scanf("%d", &disp[i][j]);

 }

 }

 //Displaying array elements

 

 printf("Two Dimensional array elements:\n");

 for(i=0; i<2; i++) /*outer for loop*/

 {

 for(j=0;j<3;j++) /*Inner for loop*/

 {

 printf("%d ", disp[i][j]);

 /* if(j==2)

 {

 printf("\n");

 } */

 }

 }

 return 0;

}

Output:

Enter value for disp[0][0]:1

Enter value for disp[0][1]:2

Enter value for disp[0][2]:3

Enter value for disp[1][0]:4

Enter value for disp[1][1]:5

Enter value for disp[1][2]:6

Two Dimensional array elements:

1 2 3 

4 5 6
