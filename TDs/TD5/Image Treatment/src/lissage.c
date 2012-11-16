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


/* *** Main *** */

void lissage (char image[][16])
{
	/* *** Variables Declaration *** */
	
	int i = 0 ;
	int j = 0 ;
	int line = 0 ;
	int column = 0 ;
	int somme = 0 ;
	int coeff = 0 ;
	char buffer[2][16] ;
	
	
	/* *** Computing *** */
	
	for (line=0 ; line<=16 ; line++)
	{
		/* 1.Treatment of a new line */
		if (line < 16)
		{
			for (column=0 ; column<16 ; column++) /* Treat image[line][column] */
			{
				somme = 0 ;
				coeff = 9 ;
				
				for (i=line-1 ; i<=line+1 ; i++)
				{
					for (j=column-1 ; j<=column+1 ; j++)
					{
						if ( (i>-1 && j>-1) && (i<16 && j<16))
						{
							somme += image[i][j] ;
						}
						/* Case image[i][j] is outside the array because
						   image[line][column] is a border */
						else --coeff ;
						
					}
				}
				
				buffer[1][column] = somme/coeff ;
			}
		}
		
		/* 1.Copy buffer backed up (line - 1) in the image */
		if (line > 0)
		{
			for (i=0 ; i<16 ; i++)
			{
				image[line-1][i] = buffer[0][i] ;
			}
		}
		
		/* 2.Back up buffer */
		if (line < 16)
		{
			for (i=0 ; i<16 ; i++)
			{
				buffer[0][i] = buffer[1][i] ;
			}
		}		
	}
}
