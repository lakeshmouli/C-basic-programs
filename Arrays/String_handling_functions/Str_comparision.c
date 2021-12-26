#include <stdio.h>

#include<string.h>

int main()

{

char str1[20] = "this is strcmp", str2[20] = "THIS is strcmp";

if(strcmp(str1, str2) == 0)

printf("The strings str1 and str2 are same \n ");

else

printf("str1 and str2 are not equal \n");

return 0;

}

