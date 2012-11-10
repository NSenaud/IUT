#include <stdio.h>
#include <limits.h>

int main()
{
  unsigned long int facto = 1 ;
  int i=1, n=1, overflow=0 ;

  // Entrées
  printf("n = ")  ;
  scanf("%d", &n) ;

  // Traitement
  while( i<=n )
    {
      facto = facto*i ;
      i++ ;

      if( facto > ( ULLONG_MAX / i ))
	{
	  printf( "Too Large Number!\n") ;
	  overflow = 1 ;
	  break ;
	}
    }

  // Sortie
  if( overflow == 0)
    printf("%d! = %li\n", n, facto) ;
  
  return 0 ;
}
