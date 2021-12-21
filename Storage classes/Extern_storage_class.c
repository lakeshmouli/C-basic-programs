#include <stdio.h>

extern int num1 = 1;

extern int num2 = 2;

int main()

{

int add = num1 + num2;

printf("%d + %d = %d ", num1, num2, add);

return 0;

}
