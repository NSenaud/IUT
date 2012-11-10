#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  short int i  = 0 ;
  short int win= 0 ;                  // Winner ?
  long int sum = 0 ;                  // Your score...
  short int nb = 0 ;                  // Your chance!

  srand(time(NULL)) ;

  for(i=0 ; i<3; i++)
    {
      do
	{
	  nb = rand()%7 ;             // nb = rand()%6 + 1 ;
	}
      while( nb == 0 ) ;

      sum += nb ;                     // sum = sum + nb ;

      printf("You got a %d, the sum is %d.\n", nb, sum) ;

      if( (sum > 14) || (nb == 6) )
	{
	  win = 1 ;
	  break ;
	}
    }

  if( win == 1)
    {
      printf("You Win!\n") ;
    }
  else
    {
      printf("Looooser...\n") ;
    }
}
