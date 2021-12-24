#include<stdio.h>

#include<conio.h>

void main()

{

int a, b, c ;

float avg ;

printf("Enter any three integer values : ") ;

scanf("%d%d%d", &a, &b, &c) ;

avg = (a + b + c) / 3 ;

printf("avg before casting = %f\n",avg);

avg = (float)(a + b + c) / 3 ;

printf("avg after casting = %f\n",avg);

}

