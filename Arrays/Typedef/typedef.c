#include <stdio.h>

int main()

{

typedef int rectangle; 

//creating new data type name rectangle using typedef

rectangle length, breadth, area;

//declaring variables using new data type name rectangle

printf("\nEnter length and breath of the rectangle ");

scanf("%d %d ", &length, &breadth);

area = length * breadth;

printf("\nArea = %d ", area);

return 0;

}
