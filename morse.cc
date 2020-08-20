#include <vector>
#include <iostream>
#include "morse_decoder.h"

int main() {

	std::string h = ".... . .-.. .-.. ---";

	MorseDecoder mp = MorseDecoder(h);
	mp.encodeString();

	return 0;
}
