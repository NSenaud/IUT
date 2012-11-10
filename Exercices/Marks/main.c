#include <stdio.h>


int function( int number ) ;

int main( int argc, char *argv[] )
{
  /* *** Variables Declaration *** */
  
  long int i = 0 ;
  double moyenne = 0 ;
  double somme = 0, mark ;
  int input = 1 ;

  printf("--- Enter marks ( '-1' to finish ) ---\n") ;


  /* Input Loop */

  while( input )
    {
      printf("Mark: ") ;
      scanf("%lf", &mark) ;

      if( (mark > -1) && (mark < 21) )
	{
	  somme += mark ;
	  ++i ;
	}
      else if( mark == -1 )
	{
	  input = 0 ;
	}
      else
	{
	  printf("Is it a mark?\n") ;
	}
    }
      

  /* *** Computing *** */

  moyenne = somme/i ;


  /* Display Output */

  printf("--- => %.2lf/20\n", moyenne) ;


  /* *** End of Program *** */

  return 0 ;
}
