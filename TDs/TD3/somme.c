#include <stdio.h>

int main()
{
  int sum=0, i=0, n=0 ;

  // Entrées
  printf("n = ")  ;
  scanf("%d", &n) ;

  // Traitement
  while( i<=n )
    {
      sum += i ;
      i++ ;
    }

  // Sortie
  printf("Sum = %d\n", sum) ;

  return 0 ;
}
