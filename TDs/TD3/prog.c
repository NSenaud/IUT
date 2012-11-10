#include <stdio.h>

int calculer_max_2_entiers(int a, int b);

int main()
{
  int var1 = 23, var2 = 51, var3 = 17 ;
  int max = 0 ;

  max = calculer_max_2_entiers(var1, var2) ;
  max = calculer_max_2_entiers(max, var3) ;

  printf("%d\n", max) ;

  return 0;
}

int calculer_max_2_entiers(int a, int b)
{
  int max = 0 ;
  if(a > b)
    {
      max = a ;
    }
  else
    {
      max = b ;
    }

  return max ;
}
