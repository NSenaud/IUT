/* *************************************************************************************************** */
/* ***                         Decimal Base to Another Base Converter                              *** */
/* *************************************************************************************************** */
/*                                                                                                     */
/* Author: Nicolas Senaud <nicolas@senaud.fr>                                                          */
/*                                                                                                     */
/* Description: Convert to a selected base (first argument) to another base a positive number (second  */
/*              argument). The second base need to be a number between 2 and 36, to allow the output   */
/*              to use number ( 0 to 9 ) and letters ( a to z ). The decimal value of the number have  */
/*              to be between 0 and ULONG_MAX --typically 18.446.744.073.709.551.615 on a 64 bits      */
/*              system-- to avoid overflow.                                                            */
/*                                                                                                     */
/* *************************************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>

#define MAX 64                                 /* I suppose you run a 64 bits system...                */


int main( int argc, char *argv[] )
{
  /* *** Variables *** */

  short         int base   = 0     ;
  unsigned long int nb     = 0     ;
  short         int x      = 0     ;           /* Number 'nb' in base 'base' has 'x' digit(s).         */
  short         int n      = 0     ;           /* 'n' = value of column's 'x'  digit.                  */
  char              c      = '0'   ;           /* 'c' = value of column's 'x' "digit" if n>9.          */
  char              output [MAX-1] ;           /* Output array, char type because of base>10.          */
  short         int i      = 0     ;


  /* *** Check Parameters *** */

  if( argc < 3 || ( atoi(argv[1]) < 2 || atoi(argv[1]) > 36) ) /* Bad parameters?                      */
    {
      printf( "base <Base [2 to 36]> <Number>\n" ) ;
      return 1 ;
    }
  else
    {
      base = atoi(argv[1]) ;
    }

  if( strtoul(argv[2], NULL, 10) == ULONG_MAX ) /* Too large number?                                   */
    {
      printf( "Too Large Number!\n" ) ;
      return 1 ;
    }
  else
    {
      nb = strtoul(argv[2], NULL, 10) ;
    }


  /* *** Computing... *** */

  i = 0 ;
  while( nb > 0 )                               /* Find each digit starting from smaller digits.       */
    {
      n = nb%base ;

      if( n < 10 )
	{
	  output[i] = (n+48) ;
	}
      else
	{
	  output[i] = 'a' + (n-10) ;
	}

      nb /= base ;
      ++x ;
      ++i ;
    }


  /* *** Output *** */

  printf( "%s(%s) = ", argv[2], argv[1] ) ;
  for( i=(x-1) ; i>-1 ; i-- )
    {
      printf( "%c", output[i] ) ;
    }

  printf("\n") ;

  return 0 ;
}
