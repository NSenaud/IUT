image: main.o lissage.o
	gcc $(CFLAGS) -o image main.o lissage.o

main.o: src/main.c include/lissage.h
	gcc $(CFLAGS) -c src/main.c

lissage.o: src/lissage.c include/lissage.h
	gcc $(CFLAGS) -c src/lissage.c 

clean:
	rm -f *.o program
