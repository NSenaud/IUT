/*                                      <Tri a bulles>                                       *
 * Copyright (C) 2012                                                                        *
 *
 * Description: of <Program>                                                                 *
 *
 * Author: Nicolas Senaud <nicolas@senaud.fr>                                                *
 *         Copyright (C) 2012                                                                *
 *
 * Licence:
 * <Program> is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * <Program> is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.                           */


#include <stdio.h>
#include <stdlib.h>

/*Prototypes*/

void tri(int * tab) ;


/* *** Main *** */

int main (int argc, char *argv[])
{
	/* *** Variables Declaration *** */
	int i = 0 ;
	int tableau[6] ;
	
	/*	Initialisation du Tableau*/
	for (i=0 ; i<6 ; i++)
	{
		tableau[i] = rand()%10 ;
	}
	
	printf("*** Generated Datas ***\n") ;
	for (i=0 ; i<6 ; i++)
	{
		printf ("%d\n", tableau[i]) ;
	}
	
	
	/*	Tri*/
	tri(tableau) ;
	
	
	/*	Output*/
	printf("*** Resulted Datas ***\n") ;
	for (i=0 ; i<6 ; i++)
	{
		printf ("%d\n", tableau[i]) ;
	}
	
	return 0 ;
}

void tri (int * tab)
{
	int i = 0 ;
	int n = 0 ;
	/*	Indique s'il y a permutation lors d'une passe.*/
	int permut = 0 ;
	
	do
	{
		permut = 0 ;
		for (i=0 ; i<5 ; i++)
		{
			if (tab[i]>tab[i+1])
			{
				n = tab[i] ;
				tab[i] = tab[i+1] ;
				tab[i+1] = n ;
				
/*				Il y a eu permutation*/
				permut = 1 ;
			}
		}
	} while (permut != 0) ;
}
