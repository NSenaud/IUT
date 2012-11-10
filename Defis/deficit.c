#include <stdio.h>

#define DEFICIT_MAX_NORM  0.5
#define DEFICIT_MAX_EXEP  1.0
#define DETTE_PUBLI_EXEP 60.0

int main()
{
  /* *** Declaration des variables *** */
  int regle_dor=0, circons=2 ;
  double deficit, dette ;

  /* *** Preparation *** */
  puts("***\t Respect de la regle d'or budgetaire\t***\n")       ;
  puts("(Les valeurs doivent etre donnees en Milliards d'Euros") ;

  printf("Deficite : ") ;
  scanf("%d", deficit) ;

  printf("Dette : ") ;
  scanf("%d", dette) ;

  printf("Circonstances Exceptionnelles (0 = non ; 1 = oui) : ") ;
  do
    {
      scanf("%d", circons) ;
    }
  while((circons != 0) || (circons != 1)) ;

  /* *** Traitement *** */

  //
  // Calcul des pourcentages & conditions
  //

  /* *** Sorties *** */
  if( regle_dor == 1 )
    {
      printf("La regle d'or est respectee\n") ;
    }
  else
    {
      printf("Lq regle d'or n'est pas respectee\n") ;
    }

  return 0 ;
}
