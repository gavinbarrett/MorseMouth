#include <string>
#include <vector>
#include <iostream>
#include "morse_decoder.h"

int main() {
	// create a string in morse code that reads `HELLO`
	std::string h = ".... . .-.. .-.. ---";
	// create a morse code decoder
	MorseDecoder mp = MorseDecoder(h);
	// decode the target string
	std::string decoded = mp.decodeString();
	// print out the decoded string
	std::cout << decoded << std::endl;
	return 0;
}
