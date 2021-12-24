#include <stdio.h>

int main( int argc, char *argv [] )

{

int res,a,b;

a = atoi(argv[1]); 

b = atoi(argv[2]);

res=a+b; 

printf("sum of a,b is:%d",res);

printf(" \n First arg is %s \n", argv[0]);

printf(" \n 2nd arg is %s \n", argv[1]);

printf(" \n 3rd arg is %s \n", argv[2]);

printf("arg sum is: %d",argc);

return 0;

}

