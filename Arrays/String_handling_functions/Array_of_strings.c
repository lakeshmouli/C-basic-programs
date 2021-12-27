#include<stdio.h>

int main()

{

 int i;

 char ch_arr[3][10] = {

 "sriram",

 "king",

 "shiva"

 };

 printf("*******The array of strings are ********\n\n");

 for(i = 0; i < 3; i++)

 {

 printf("the out put string is = %s \n", ch_arr+i);

 //printf("memory address is= %u \n", ch_arr + i); 

 }

 return 0;

}
