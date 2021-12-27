#include <stdio.h>

#include <string.h>

int main( )

{

 char source[ ] =" Strings” ;

 char target[ ]= “welcome YOU” ;

 printf ( “\n Source string = %s”, source ) ;

 printf ( “\n Target string = %s”, target ) ;

 strncat ( target, source, 3 ) ;

 printf ( "”\n Target string after strncat( ) = %s”, target ) ;
 }
