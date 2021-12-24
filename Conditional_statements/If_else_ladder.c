#include<stdio.h>

void main()

{

 int a, b, c ;

 clrscr() ;

 printf("Enter any three integer numbers: ") ;

 scanf("%d%d%d", &a, &b, &c) ;

 if( a>=b && a>=c) /*condition-1*/

 printf("%d is the largest number", a) ;

 else if (b>=a && b>=c) /*condition-2*/

 printf("%d is the largest number", b) ;

 else

 printf("%d is the largest number", c) ;

}
