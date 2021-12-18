#include<stdio.h>

void main(){

    int b = 10, a = 1, c;

    for(c=1;c<=2;c++){

    	a = (a+c)*c;    	b = b-c;

    }

    if(0){

        b = a-1;

        a = a-1;

        a = b+1;

    }

    else{

        a = b+1;

        b = a-1;

        a = a-1;

    }

    printf("%d", a+b+c);

}
