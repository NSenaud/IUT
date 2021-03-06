/* Transforme les valeurs d'un tableau de char en données binaires' */

#include <stdio.h>

#define SEUIL 'l'

void compression_binaire (unsigned char * ptr_bin) ;

int main (int argc, char * argv[])
{
  int i = 0 ;
  static unsigned char bin[10] = ("nicolassen") ;

  compression_binaire (bin) ;

  for (i=0 ; i<10 ; i++)
    {
      printf("%c", bin[i]) ;
    }

  puts(" ");

  return 0 ;
}

void compression_binaire (unsigned char * ptr_bin)
{
  int i = 0 ;

  for (i=0 ; i<10 ; i++)
    {
      if(*(ptr_bin+i) < SEUIL)
	*(ptr_bin+i) = '0' ;
      else
	*(ptr_bin+i) = '1' ;
    }
}
