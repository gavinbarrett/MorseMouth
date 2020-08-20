#include <string>
#include <iostream>
#include "morse_map.h"
#include "morse_decoder.h"

MorseDecoder::MorseDecoder(std::string tarStr) : state(0), targetString(tarStr) {}

char MorseDecoder::getCharAt(int index) {
	// extract the next character at the head of the string
	return this->targetString[index];
}

char MorseDecoder::interpretMorseChar() {
	return morseMap.at(this->newChar);
}

void MorseDecoder::transitionFunction(char next) {
	if (this->state == 0) {
		if (next == 0x20)
			return;
		if (next == '.' || next == '-') {
			this->newChar += next;
			this->state = 1;
			return;
		} else
			throw "Not valid morse code!";
	} else if (this->state == 1) {
		if (next == '.' || next == '-') {
			this->newChar += next;
			return;	
		} else if (next == 0x20) {
			// interpret character and add to buffer
			this->charBuffer += interpretMorseChar();
			// erase newChar
			this->newChar.clear();
			// transition to state 2
			this->state = 2;
		} else
			throw "Not valid morse code!";
	} else if (this->state == 2) {
		if (next == '.' || next == '-') {
			this->newChar += next;
			this->state = 1;
		} else if (next == 0x20) {
			this->charBuffer += next;
			this->state = 0;
		} else
			throw "Not valid morse code!";
	}
}

void MorseDecoder::encodeString() {
	int size = static_cast<int>(this->targetString.size());
	for (int index = 0; index < size; index++) {
		// return the next char
		char next = this->getCharAt(index);
		// process transition
		transitionFunction(next);
	}
	this->charBuffer += interpretMorseChar();
	std::cout << "String: " << this->charBuffer << std::endl; 
}
