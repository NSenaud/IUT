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


#include "../include/arrange.h"


void arrange (short int * tab, short int tab_size)
{
	int i = 0 ;
	int n = 0 ;
	/* Permutation? */
	int permut = 0 ;
	
	do
	{
		permut = 0 ;
		for (i=0 ; i<tab_size ; i++)
		{
			if (tab[i]>tab[i+1])
			{
				n = tab[i] ;
				tab[i] = tab[i+1] ;
				tab[i+1] = n ;
				
				permut = 1 ;
			}
		}
	} while (permut != 0) ;
}
