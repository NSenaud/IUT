#include <stdio.h>
#include <math.h>

int main()
{
  // Déclaration des variables
  short int bande1=0, bande2=0, bande3=0 ;
  long int resistance = 0 ;

  // Entrées
  do
    {
      printf("Bande 1 : ") ;
      scanf("%d", &bande1) ;
    }
  while( (bande1 == 0) || (bande1 > 9) ) ;

  do
    {
      printf("Bande 2 : ") ;
      scanf("%d", &bande2) ;
    }
  while( (bande2 == 0) || (bande2 > 9) ) ;

  do
    {
      printf("Bande 3 : ") ;
      scanf("%d", &bande3) ;
    }
  while( (bande3 == 0) || (bande3 > 9) ) ;

  // Calcul
  resistance = (10*bande1 + bande2)*pow(10, bande3) ;

  // Sortie
  printf("Resistance : %ld\n", resistance) ;

  return 0 ;
}
