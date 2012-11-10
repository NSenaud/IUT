#include <stdio.h>
#include <string.h>

char test( int x ) ;

int main()
{
  // Déclaration des Variables
  int nb=500, plus=1000, moins=0 ;
  int trouve = 0 ;
  char plus_ou_moins ;

  // Ouverture
  printf("Pensez à un nombre entre 0 et 1000.\n") ;

  do
    {
      nb = (plus + moins)/2 ;

      plus_ou_moins = test(nb) ;

      if( plus_ou_moins == '+' )
	{
	  moins = nb ;
	}
      else if( plus_ou_moins == '-' )
	{
	  plus = nb ;
	}
      else if( plus_ou_moins == '=' )
	{
	  trouve = 1 ;
	  printf("Trouvé !\n") ;
	}
    }
  while( trouve != 1 ) ;

  return 0 ;
}

char test( int x )
{
  char retour = '0' ;

  do
    {
      printf("Entrez - pour plus petit, + pour plus grand et = si c'est le chiffre.\n");
      printf("Est-ce que le nombre est %d ?", x) ;
      retour = getchar() ;
    }
  while( (retour != '+') && (retour != '-') && (retour != '=')) ;

  return retour ;
}
