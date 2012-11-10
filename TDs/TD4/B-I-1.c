#include <stdio.h>


int function( int number ) ;

int main( int argc, char *argv[] )
{
  /* *** Variables Declaration *** */
  
  int i = 0 ;
  int number ;


  /* *** Check Parameters *** */

  if( argc < 2 )                                               /* Bad parameters?            */
    {
      printf( "Program <Parameter>\n" ) ;
      return 1 ;
    }


  /* *** Variable Initialisation *** */

  number = atoi(argv[1]) ;


  /* *** Computing *** */

  if( function(number) == 1 )
    printf("%d is divisable by 3 and not 33\n", number) ;
  else
    printf("%d is not divisable by 3 and not 33\n", number) ;


  /* *** End of Program *** */

  return 0 ;
}


int function( int number )
{
  if( (number%3 == 0) && (number%33 != 0) )
    return 1 ;
  else
    return 0 ;
}
