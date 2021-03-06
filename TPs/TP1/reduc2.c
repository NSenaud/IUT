#include <stdio.h>

#define NIVEAU1 100
#define NIVEAU2 300
#define TAUX1   5.
#define TAUX2   8.

void main(void)
{
  // Definition des Variables
  double prix=0, prix_f=0, remise=0 ;

  // Entrée
  printf("Prix : ") ;
  scanf("%lf", &prix) ;

  // Traitement
  if( prix >= NIVEAU2 )
    {
      prix_f = prix*(1 - TAUX2/100) ;
      remise = prix - prix_f ;
    }
  else if( prix >= NIVEAU1 )
    {
      prix_f = prix*(1 - TAUX1/100) ;
      remise = prix - prix_f ;
    }
  else
    {
      prix_f = prix ;
      remise = 0 ;
    }

  // Sortie
  printf("Prix Final : %.2lf\nRemise : %.2lf\n", prix_f, remise) ;

}
