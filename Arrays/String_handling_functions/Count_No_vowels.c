# include<stdio.h> 

# include<conio.h> 

# include<string.h> 

void main( ) 

 { 

 char st[80], ch; 

 int count = 0, i; 



 printf(“ \n Enter the sentence: \n”); 

 gets(st); 

 for( i=0; i<strlen(st); i++) 

 switch(st [i ])

 { 

 case ‘A’: 

 case ‘E’:

case ‘I’: 

 case ‘O’: 

 case ‘U’: 

 case ‘a’: 

 case ‘e’: 

 case ‘I’: 

 case ‘o’: 

 case ‘u’: 

 count ++; 

 break; 

 } 

 printf(“\n %d vowels are present in the sentence”, count); 

 getch( ); 

}
