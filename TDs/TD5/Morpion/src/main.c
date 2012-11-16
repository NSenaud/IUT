/*                                      <Program>                                            *
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
#include "../include/morpion.h"


/* *** Main *** */

int main (int argc, char *argv[])
{
	/* *** Variables Declaration *** */
	
	int i = 0 ;
	int winner = 0 ; 	/* 0 is for no winner, 1 or 2 for 1 or 2 is the winner. */
	
	/* Arbitrary Initialisation of the Game's Table */
	short int table[3][3] = {{1,0,1},	/* O is for 'not used yet',   */
				 {0,2,2},	/* 1 is for 'used by player 1 */
				 {2,1,1}} ;	/* 2 is for 'used by player 2 */
		
	
	/* *** Computing *** */
	
	/* Analyse Game's Table to Check if Current Config Allow a Player to Win */
	winner = morpion_analyse (table) ;
	
	
	/* *** Output *** */
	if (winner != 0)
		printf ("The Winner is %d\n", winner) ;
	else
		printf ("No Winner Yet.\n") ;
	
	
	/* *** End of Program *** */
	
	return 0 ;
}
