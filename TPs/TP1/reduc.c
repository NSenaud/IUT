#include <stdio.h>

#define SEUIL1  100
#define SEUIL2  300
#define REMISE1 5.
#define REMISE2 8.

int main()
{
  // Déclaration des Variables
  double prix=0, prix_f=0, remise=0 ;

  // Entrée
  printf("Prix : ")   ;
  scanf("%lg", &prix) ;

  // Traitement
  if( prix >= SEUIL2 )
    {
      prix_f = prix*( 1 - REMISE2/100 ) ;
      remise = prix - prix_f            ;
    }
  else if ( prix >= SEUIL1 )
    {
      prix_f = prix*( 1 - REMISE1/100 ) ;
      remise = prix - prix_f            ;
    }
  else
    {
      prix_f = prix ;
      remise = 0    ;
    }

  // Sorties
  printf("Prix Final :\t%lg\nRemise :\t%lg\n", prix_f, remise) ;

  return 0 ;
}
