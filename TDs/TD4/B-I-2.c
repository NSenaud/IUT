#include <stdio.h>
#include <time.h>


int function() ;

int i = 0 ;

int main( int argc, char *argv[] )
{
  /* *** Variables Declaration *** */
  
  int number ;


  /* *** Computing *** */

  number = function() ;

  printf( "%d\n", number ) ;

  /* *** End of Program *** */

  return 0 ;
}

int function()
{
  int number ;
  
  for( i=0 ; i<20 ; i++)
    {
      srand(time(NULL)) ;
      number += rand()%10 +1 ;
    }

  return number ;
}
