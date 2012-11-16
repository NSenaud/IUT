#include <stdio.h>

void compression_flux(long int * tab) ;

int main (int argc, char * argv[])
{
	int i = 0 ;
	long int dist[10] ;
	
	/*	Initialise sat[]*/
	for (i=0 ; i<10 ; i++)
	{
		dist[i] = rand() ;
	}
	
	/*	Display Generated tab*/
	printf("*** Generated Datas ***\n") ;
	for (i=0 ; i<10 ; i++)
	{
		printf ("%d\n", dist[i]) ;
	}
	
	/*	Treatment*/
	compression_flux (dist) ;
	
	/*	Display Result*/
	printf("*** Resulted Datas ***\n") ;
	for (i=0 ; i<10 ; i++)
	{
		printf ("%d\n", dist[i]) ;
	}
	
	return 0 ;
}

void compression_flux (long int * tab)
{
	int i = 0 ;
	
	for (i=9 ; i>-1 ; i--)
	{
		*(tab+i) = *(tab+i)-*(tab+i-1) ; 
	}
}
