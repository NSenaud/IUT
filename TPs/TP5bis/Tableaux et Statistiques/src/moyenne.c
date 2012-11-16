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


double calc_moy (double * marks, int n_items)
{
	/* *** Déclaration des Variables *** */
	
	int i = 0 ;
	double somme = 0 ;
	
	
	/* *** Traitement *** */
	
	for (i=0 ; i<n_items ; i++)
	{
		somme += *(marks+i) ;
	}
	
	
	/* *** Valeur de Retour *** */
	
	return (double) somme/n_items ;
}
