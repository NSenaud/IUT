#include <stdio.h>
#include <stdlib.h>
#include <time.h>


// Global Variable
int code = 0 ;

// Functions Prototype
int createCode() ;                       // Generate a random 4 numbers pass code
int tryCode(int x) ;                     // Try a code, return 1 if right code


int main()
{
  // Déclaration des Variables
  int t_code=0, found=0 ;

  // Initialisation du Code
  createCode() ;

  // Traitement
  while( (t_code < 10000) && (found == 0) )
    {
      if( tryCode(t_code) == 1 )
	found = 1 ;
      else
	++t_code ;
    }

  // Sortie
  printf("Found Code = %04d\n", t_code) ;

  return 0 ;
}


int createCode()
{
  srand(time(NULL)) ;                // Initialisation du Hasard
  code = rand()%10000 ;

  printf("(Generated Code : %04d)\n", code) ;
}

int tryCode(int x)
{
  if( x == code )
    return 1 ;
  else
    return 0 ;
}
