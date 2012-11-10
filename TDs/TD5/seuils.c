/* Limite par valeurs négatives et positives les valeurs du tableau */

#include <stdio.h>
#include <stdlib.h>

#define SEUILH  100
#define SEUILB -100

void seuil (long int * tab) ;

int main (int argc, char * argv[])
{
	int i = 0 ;
	long int sat[10] ;
	
	/*	Initialise sat[}]*/
	for (i=0 ; i<10 ; i++)
	{
		sat[i] = rand()%150 ;
	}
	
	/*	Treatment*/
	seuil (sat) ;
	
	/*	Display Result*/
	for (i=0 ; i<10 ; i++)
	{
		printf ("%d\n", sat[i]) ;
	}
	
	return 0 ;
}

void seuil (long int * tab)
{
	int i = 0 ;
	
	for (i=0 ; i<10 ; i++)
	{
		if (*(tab+i) > SEUILH)
			*(tab+i) = SEUILH ;
		if (*(tab+i) < SEUILB)
			*(tab+i) = SEUILB ;
	}
}
