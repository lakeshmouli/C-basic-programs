#include<stdio.h>

void main()

{

 int n ;

 clrscr() ;

 printf("Enter any integer number: ") ;

 scanf("%d", &n) ;

 if ( n < 100 )

 {

 printf("Given number is below 100\n") ;

 

 if( n%2 == 0)

 printf("And it is EVEN") ;

 else

 printf("And it is ODD") ;

 }

 

 else

 printf("Given number is not below 100") ;

}

