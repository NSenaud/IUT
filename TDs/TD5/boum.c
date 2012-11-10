#include <stdio.h>
#include <time.h>

int main (int argc, char *argv[])
{
  short int i ;

  for (i=10 ; i>0 ; i--)
    {
      printf("%d..", i) ;
      fflush(stdout) ;
      sleep(1) ;
    }

  puts("0!") ;

  return 0 ;
}
