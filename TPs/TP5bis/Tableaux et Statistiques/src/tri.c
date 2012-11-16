/*                                      Tab&Stats                                            *
 * Copyright (C) 2012                                                                        *
 *
 * Description: Tab&Stats génère des notes aléatoires, et calcul moyenne, mediane, et fournit*
 *              un histogramme rudimentaire de la répartition des notes.                     *
 *
 * Author: Nicolas Senaud <nicolas@senaud.fr>                                                *
 *         Copyright (C) 2012                                                                *
 *
 * Licence:
 * Tab&Stats is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * Tab&Stats is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.                           */


#include <stdio.h>
#include <stdlib.h>


void tri (double * tab, int size)
{
	int i = 0 ;
	double n = 0 ;
	int permut = 0 ;	/* Indique s'il y a permutation lors d'une passe.*/
	
	do
	{
		permut = 0 ;
		for (i=0 ; i<size ; i++)
		{
			if (tab[i]>tab[i+1])
			{
				n = tab[i] ;
				tab[i] = tab[i+1] ;
				tab[i+1] = n ;
				
				permut = 1 ;	/* Il y a eu permutation*/
			}
		}
	} while (permut != 0) ;
}
