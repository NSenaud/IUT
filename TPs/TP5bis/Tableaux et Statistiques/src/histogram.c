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


/* Génération du Tableau de Données qui Permet de Créer l'Histogramme */
void histogram (int * histo, double * tab, int tab_size, int min_value, int max_value)
{
	/* *** Déclaration des Variables *** */
	
	int i = 0 ;
	
	/* Initialise histo */
	for (i=0 ; i<=max_value ; i++)
	{
		histo[i] = 0 ;
	}
	
	
	/* *** Compte le Nombre d'Occurence de Chaque Note *** */
	
	for (i=0 ; i<tab_size ; i++)
	{
		++histo[(int)tab[i]] ;
	}

}

/* Fonction d'Affiche de l'Algorithme */
void display_histogram (int * histogram, int max_value)
{
	int i = 0 ;
	int j = 0 ;
	int max = 0 ;
	
	max = calculer_max (histogram, max_value) ;	/* Détermine le nombre maximal d'occurence d'une note */
	
	/* Affichage de l'Histogramme... */
	for (i=max ; i>0 ; i--)		/* ...Ligne par Ligne... */
	{
		printf ("%2d", i) ;	/* Echelle des ordonnées */
		for (j=0 ; j<=max_value ; j++)
		{
			if (histogram[j] > i-1)
			{
				printf (" ##") ;	/* Un morceau de barre... */
			}
			else
			{
				printf ("   ") ;	/* ... Ou un espace vide. */
			}
		}
		puts ("|") ;
	}
	
	printf("  ") ;
	for (i=0 ; i<=max_value ; i++)
	{
		printf (" %2d", i) ;	/* Echelle des Abscisses */
	}
	puts("\n") ;
}

/* Détermine le nombre maximal d'occurence d'une note */
int calculer_max (int * histogram, int max_value)
{
	int i = 0 ;
	int max = 0 ;
	
	for (i=0 ; i<=max_value ; i++)
	{
		if (max < histogram[i])
		{
			max = histogram[i] ;
		}
	}
	
	return max ;
}
