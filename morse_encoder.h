#ifndef MORSE_ENCODER_H_
#define MORSE_ENCODER_H_
#include <string>
class MorseEncoder {
	private:
		std::string targetString;
		std::string charBuffer;
	public:
		MorseEncoder(std::string);
		void encodeString();
}
#endif
