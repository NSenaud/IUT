#include <stdio.h>


double factorielle( int number )   ;
double arrangement( int k, int n ) ;
double combinaison( int k, int n ) ;


int main( int argc, char *argv[] )
{
  /* *** Variables Declaration *** */
  
  int i = 0 ;
  int n=49, k=6 ;
  double proba = 0 ;


  /* *** Computing *** */

  proba = combinaison( k, n ) ;


  /* Result */

  printf("Probability: 1/%.0lf\n", proba) ;


  /* *** End of Program *** */

  return 0 ;
}


/* *** Fonction Arrangement */

double arrangement( int k, int n )
{
  double res = 0 ;

  res = factorielle(n)/factorielle( n-k ) ;

  return res ;
}


/* Fonction Combinaison */

double combinaison( int k, int n )
{
  double res = 0 ;

  res = arrangement( k, n ) / factorielle( k ) ;

  return res ;
}


/* Fonction Factorielle */

double factorielle( int number )
{
  int i = 1 ;
  double res = 1 ;

  while( i <= number )
    {
      res *= i ;
      ++ i ;
    }

  return res ;
}
