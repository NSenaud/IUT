#*                                      Tab&Stats                                            *
#* Copyright (C) 2012                                                                        *
#*
#* Description: Tab&Stats génère des notes aléatoires, et calcul moyenne, mediane, et fournit*
#*              un histogramme rudimentaire de la répartition des notes.                     *
#*
#* Author: Nicolas Senaud <nicolas@senaud.fr>                                                *
#*         Copyright (C) 2012                                                                *
#*
#* Licence:
#* Tab&Stats is free software: you can redistribute it and/or modify it
#* under the terms of the GNU General Public License as published by the
#* Free Software Foundation, either version 3 of the License, or
#* (at your option) any later version.
#* 
#* Tab&Stats is distributed in the hope that it will be useful, but
#* WITHOUT ANY WARRANTY; without even the implied warranty of
#* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
#* See the GNU General Public License for more details.
#* 
#* You should have received a copy of the GNU General Public License along
#* with this program.  If not, see <http://www.gnu.org/licenses/>.                           */

program: main.o moyenne.o mediane.o tri.o histogram.o
	gcc $(CFLAGS) -o program main.o moyenne.o mediane.o tri.o histogram.o

main.o: src/main.c include/moyenne.h include/mediane.h
	gcc $(CFLAGS) -c src/main.c

moyenne.o: src/moyenne.c include/moyenne.h
	gcc $(CFLAGS) -c src/moyenne.c
	
mediane.o: src/mediane.c include/mediane.h include/moyenne.h
	gcc $(CFLAGS) -c src/mediane.c include/moyenne.h
	
tri.o: src/tri.c include/tri.h
	gcc $(CFLAGS) -c src/tri.c include/tri.h
	
histogram.o: src/histogram.c include/histogram.h
	gcc $(CFLAGS) -c src/histogram.c include/histogram.h

clean:
	rm -f *.o program
