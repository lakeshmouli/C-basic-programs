#include <stdio.h>

#include <string.h>

int main ()

{

 char string[25] =”This is a string “;

 char *p;

 p = strchr (string,'i');

 printf (“Character i is found at position %d\n”,p-string+1);

 printf (“First occurrence of character \”i\” in \”%s\” is” \” \”%s\””,string, p);
 
 return 0;

}
