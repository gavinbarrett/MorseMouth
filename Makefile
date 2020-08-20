morse: morse.o morse_decoder.o
	g++ -g -Wall -Werror -std=c++11 -o morse morse.o morse_decoder.o

morse.o: morse.cc morse_map.h
	g++ -g -Wall -Werror -std=c++11 -c morse.cc

morse_decoder.o: morse_decoder.cc morse_decoder.h
	g++ -g -Wall -Werror -std=c++11 -c morse_decoder.cc

clean:
	rm morse *.o
