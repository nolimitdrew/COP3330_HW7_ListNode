menu7_executable: menu7.o
	g++ -g -o menu7 menu7.o -pedantic
	chmod 755 menu7

menu7.o: menu7.cpp stack.h list.h listnode.h
	g++ -g -c menu7.cpp -pedantic

clean:
	rm -f *.o

