# include<stdio.h> 

# include<string.h> 

# include<conio.h> 

 main() 

 { 

 char txt[250], ch, st[30]; 

 int ins, wds, chs, i;

 printf(“ \n Enter the text, type $ st end \n \n”); 

 i=0; 

 while((txt[i++]= getchar( ) ) ! =’$’);

 i--; 

 st[ i ] = ‘\0’; 

 ins = wds = chs = 0; 

 i=0; 

 while(txt[ i ]!=’$’) 

 { 

 switch(txt[ i ]) 

 { 

 case ‘,’: 

 case ‘!’: 

 case ‘\t’:
 
 case ‘ ‘: 

 { 

 wds ++; 

 chs ++;

 break; 

 } 

 case ‘?’: 

 case ‘.’: 

 { 

 wds ++; 

 chs ++;

 break; 

 } 

 default:chs ++; 

 break; 

 }

 i++; 

 } 

 printf(“\n\n no of char (incl.blanks) = %d”, chs); 

 printf(“\n No. of words = %d”, wds); 

 printf(“\n No of lines = %d”, ins); 

 getch() ; 

}
