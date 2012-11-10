#include <stdio.h>

double calculer_mensualite_pret(double duree, double montant, double taux) ;

int main()
{
  double mensualite = 0, duree, montant, taux ;

  printf("Duree :   ") ;
  scanf("%lf", &duree)  ;

  printf("Montant : ") ;
  scanf("%lf", &montant);

  printf("Taux :    ") ;
  scanf("%lf", &taux)   ;

  mensualite = calculer_mensualite_pret(duree, montant, taux) ;

  printf("%.2f euros\n", mensualite) ;
}

double calculer_mensualite_pret(double duree, double montant, double taux)
{
  double mensualite = 0 ;

  mensualite = (montant + (montant*(taux/100)))/(12*duree) ;

  return mensualite ;
}
