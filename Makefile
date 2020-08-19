morse: morse.o
	g++ -Wall -Werror -std=c++11 -o morse morse.o

morse.o: morse.cc morsemap.h
	g++ -Wall -Werror -std=c++11 -c morse.cc

clean:
	rm morse *.o
