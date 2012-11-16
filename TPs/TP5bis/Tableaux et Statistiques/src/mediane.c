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
#include "../include/moyenne.h"
#include "../include/tri.h"


double calc_med (double * notes, int n_items)
{
	/* *** Classe le Tableau *** */
	
	tri (notes, n_items) ;
	
	/* *** Calcul de la Médiane sur les Données Classées *** */
	if (n_items%2 != 0)		/* Cas où le nombre de cases est impaire. */
	{
		return *(notes+(n_items/2)) ;	/* Renvoie la valeure de la case du milieu du tableau. */
	}
	else       			/* Cas où le nombre de cases est paire. */
	{
		return calc_moy (&notes[(n_items-1)/2], 2) ; /* Renvoie la moyenne des deux cases centrales du tableau. */
	}
}
