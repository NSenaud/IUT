morpion: main.o morpion_analyse.o
	gcc $(CFLAGS) -o morpion main.o morpion_analyse.o

main.o: src/main.c include/morpion.h
	gcc $(CFLAGS) -c src/main.c include/morpion.h

morpion_analyse.o: src/morpion_analyse.c include/morpion.h
	gcc $(CFLAGS) -c src/morpion_analyse.c include/morpion.h

clean:
	rm -f *.o program
