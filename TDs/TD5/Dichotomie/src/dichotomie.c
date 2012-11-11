/* Copyright (C) 2012                                                                        *
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

#include "../include/dichotomie.h"

short int dichotomie (short int * array, short int array_size, short int search)
{
	/* Variables Declaration */
	
	short int index = array_size/2 ;
	short int index_min = 0 ;
	short int index_max = array_size ;
	
	
	/* Treatment */
	
	while (array[index] != search)
	{
		if (array[index] > search)
		{
			index_max = index ;
		}
		else
		{
			index_min = index ;
		}
		
		index = index_min + (index_max - index_min)/2 ;
	}


	return index ;
}
