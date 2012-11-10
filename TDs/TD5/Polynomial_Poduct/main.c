#include <stdio.h>

#define NMAX 10

void calculer_produit (double * p1, double * p2, double * product) ;

int main (int argc, char * argv[])
{
	int i=0, j=0 ;
	
	/*	Déclaration des Tableaux pour les Polynômes*/
	static double p1[NMAX] ;
	static double p2[NMAX] ;
	static double product[NMAX+NMAX] ;
	
	short int degrees[2] ;		// Polynomial degrees.
	
	
	/*	Inputs*/
	puts("*** Inputs ***") ;
	
	for (i=0 ; i<2 ; i++)
	{
		printf("* Polynomial %d *\n", i+1) ;
		do
		{
			printf("Degree (<=10): ") ;
			scanf("%d", &degrees[i]) ;
		} while (degrees[i] > 10) ;
		
		for (j=degrees[i] ; j>-1 ; j--)
		{
			printf("%c%d:", 'a'+i, j) ;
			if (i == 0) scanf("%lf", &p1[j]) ;
			if (i == 1) scanf("%lf", &p2[j]) ;
		}
	}
	
	/*	Initialize product*/
	for (i=0 ; i<NMAX+NMAX ; i++) product[i] = 0 ;
	
	
	/*	Treatment*/
	calculer_produit (p1, p2, product) ;
	
	
	/*	Outputs*/
	for (i=degrees[0]+degrees[1] ; i>0 ; i--)
	{
		printf("%0.lfx^%d + ", product[i], i) ;
	}
	printf("%0.lf\n", product[0]) ;
	
	return 0 ;
}

void calculer_produit(double * p1, double * p2, double * product)
{
	int i=0, j=0 ;
	
	for (i=0 ; i<NMAX ; i++)
	{
		for (j=0 ; j<NMAX ; j++)
		{
			product[i+j] += p1[i]*p2[j] ;
		}
	}
}
