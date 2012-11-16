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
#include <time.h>
#include "../include/moyenne.h"
#include "../include/mediane.h"
#include "../include/histogram.h"

#define NNOTES 12
#define NOTE_MAX 20


/* *** Main *** */

int main (int argc, char *argv[])
{
	/* *** Variables Declaration *** */
	
	int i = 0 ;				/* Compteur */
	double notes[NNOTES] ;			/* Tableau de Notes */
	double moyenne = 0 ;			/* Moyenne */
	double mediane = 0 ;			/* Médiane */
	int histogram_datas[NOTE_MAX] ;		/* Données de l'Histogramme (index = abscisse ; valeurs = ordonnée) */
	
	/* Génère NNOTES notes comprises en 0 et NOTE_MAX */
	srand(time(NULL)) ;			/* "Initialisation du Hasard" : augmente l'entropie par rapport au temps machine */
	for (i=0 ; i<NNOTES ; i++)
	{
		notes[i] = (double) (rand()%(NOTE_MAX+1)) ;
	}
	
	/* Affiche les Données Générées sous forme de tableau dans un terminal */
	printf ("\n*** Données Générées ***\n") ;
	for (i=0 ; i<NNOTES ; i++)
	{
		printf("| %d\t", i) ;
	}
	puts ("|") ;
	for (i=0 ; i<NNOTES ; i++) printf("+-------") ;
	puts ("+") ;
	for (i=0 ; i<NNOTES ; i++)
	{
		printf("| %0.lf\t", notes[i]) ;
	}
	puts ("|\n") ;
	
	
	/* *** Traitement *** */
	
	/* Calculer la moyenne, via "moyenne.h" */
	moyenne = calc_moy (notes, NNOTES) ;
	/* Calculer la mediane, via "mediane.h" */
	mediane = calc_med (notes, NNOTES) ;
	/* Generer les donnees necessaires à l'affichage d'un histogramme */
	histogram (histogram_datas, notes, NNOTES, 0, NOTE_MAX) ;


	/* *** Sorties *** */
	
	printf ("Moyenne : %.2lf\n", moyenne) ;		/* Affiche la Moyenne */
	printf ("Médiane : %.2lf\n", mediane) ;		/* Affiche la Médiane */
		
	display_histogram (histogram_datas, NOTE_MAX) ;	/* Affiche un histogramme dans un terminal */
	
	
	/* *** End of Program *** */
	
	return 0 ;
}
