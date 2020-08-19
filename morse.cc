#include <vector>
#include <iostream>
#include "morsemap.h"

int main() {

	std::string target = "HELLO there";
	int targetSize = static_cast<int>(target.size());

	for (int i = 0; i < targetSize; i++) {
		// > 64 and < 91
		if (target[i] > 0x40 && target[i] < 0x5B)
			std::cout << charMap.at(target[i]) << ' ';
		else if (target[i] > 0x60 && target[i] < 0x7B) {
			std::cout << charMap.at(target[i]-0x20) << ' ';
		} else if (target[i] == 0x20) {
			std::cout << "  ";
		} else {
			std::cout << charMap.at(target[i]) << ' ';
		}
	}

	return 0;
}
