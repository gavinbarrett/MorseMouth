#include <string>
#include "morse_encoder.h";

MorseEncoder::MorseEncoder(std::string tarStr) : targetString(tarStr) {}

void MorseEncoder::encodeString() {
	/*

	for (int i = 0; i < targetSize; i++) {
		// > 64 and < 91
		if (target[i] > 0x40 && target[i] < 0x5B)
			std::cout << charMap.at(target[i]) << ' ';
		else if (target[i] > 0x60 && target[i] < 0x7B) {
			std::cout << charMap.at(target[i]-0x20) << ' ';
		} else if (target[i] == 0x20) {
			std::cout << "  ";
		} else if (target[i] > 0x2F && target[i] < 0x3A) {
			std::cout << charMap.at(target[i]) << ' ';
		} else
			std::cout << target[i] << ' ';
	}

	*/

	return;
}
