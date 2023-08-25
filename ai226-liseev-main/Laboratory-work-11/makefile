GCC = gcc -Wall
INCLUDE = -I/usr/include
LIB = -L/usr/lib64 -lpq
OBJ = connect_softdrink.o softdrink.o remove_softdrink.o add_softdrink.o get_softdrink.o
softdrink: $(OBJ)
	$(GCC) $(OBJ) -o softdrink $(INCLUDE) $(LIB)
softdrink.o: softdrink.c
	$(GCC) -c -o softdrink.o softdrink.c $(INCLUDE) $(LIB)
connect_softdrink.o: connect_softdrink.c
	$(GCC) -c -o connect_softdrink.o connect_softdrink.c $(INCLUDE) $(LIB)
remove_softdrink.o: remove_softdrink.c
	$(GCC) -c -o remove_softdrink.o remove_softdrink.c $(INCLUDE) $(LIB)
add_softdrink.o: add_softdrink.c
	$(GCC) -c -o add_softdrink.o add_softdrink.c $(INCLUDE) $(LIB)
get_softdrink.o: get_softdrink.c
	$(GCC) -c -o get_softdrink.o get_softdrink.c $(INCLUDE) $(LIB)
install:
	cp ./softdrink /home/liseev/bin
clean:
	rm -f *.o
	rm softdrink
