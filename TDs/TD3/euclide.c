#include <stdio.h>

int main()
{
  unsigned long int a=0, b=0, t=0 ;

  printf("Enter two integers: ") ;
  scanf("%li", &a) ;
  scanf("%li", &b) ;

  while(b!=0)
    {
      t = b;
      b = a%b;
      a = t;
    }
  
  printf("GCD is: %li\n", a) ;
}
