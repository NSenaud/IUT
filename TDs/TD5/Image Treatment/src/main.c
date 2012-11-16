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

int main (int argc, char *argv[])
{
	/* *** Variables Declaration *** */
	
	int i = 0 ;
	int j = 0 ;
	unsigned char GSImage[16][16] ;
	
	/* Random Initialisation of GSImage */
	for (i=0 ; i<16 ; i++)
	{
		for (j=0 ; j<16 ; j++)
		{
			GSImage[i][j] = rand()%256 ;
		}
	}
	
	
	/* *** Computing *** */
	
	lissage(GSImage) ;
	
	
	/* *** End of Program *** */
	
	return 0 ;
}
