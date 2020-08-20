#ifndef MORSE_DECODER_H_
#define MORSE_DECODER_H_
class MorseDecoder {
	private:
		int state;
		std::string targetString;
		std::string newChar;
		std::string charBuffer;
	public:
		MorseDecoder(std::string tarStr);
		char getCharAt(int index);
		char interpretMorseChar();
		void transitionFunction(char next);
		void encodeString();
};
#endif
