#include <stdio.h>

#include <string.h>

int main( )

{

 char source[ ] = “ PPS lab ” ;

 char target[ ]= “ welcomes you” ;

 printf (“\n Source string = %s”, source ) ;

 printf ( “\n Target string = %s”, target ) ;

 strcat ( target, source ) ;

 printf ( “\n Target string after strcat( ) = %s”, target ) ;

}
