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


short int morpion_analyse (short int game_table[][3])
{
	/* *** Variables Declaration *** */
	
	short int i = 0 ;	/* Table's Line */
	short int j = 0 ;	/* Table's Column */
	
	
	/* *** Computing *** */
	
	/* We Check 3 Cases:	- There is a line of '1' or '2' ;
				- There is a column of '1' or '2' ;
				- There is a diagonal of '1' or '2'. */
	
	/* Case 1 : Line */
	for (i=0 ; i<3 ; i++)
	{
		if ( (game_table[i][0] == game_table[i][1]) && (game_table[i][1] == game_table[i][2]) )
			return game_table[i][0] ;
	}
	/* Case 2 : Column */
	for (i=0 ; i<3 ; i++)
	{
		if ( (game_table[0][i] == game_table[1][i]) && (game_table[1][i] == game_table[2][i]) )
			return game_table[0][i] ;
	}
	
	/* Case 3 : Diagonal */
	if ( ((game_table[0][0] == game_table[1][1]) && (game_table[1][1] == game_table[2][2]))
	   ||((game_table[0][2] == game_table[1][1]) && (game_table[1][1] == game_table[2][0])))
		return game_table[1][1] ;
		
	/* Default */
	
	return 0 ;
}
