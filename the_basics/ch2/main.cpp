#include <iostream>



int main() {
	// Some implicit conversions
	bool b = 42;          // b is true
	int i = b;            // i has value 1
	i = 3.13;             // i has value 3
	double pi = i;        // pi has value 3.0
	unsigned char c = -1; // assuming 8-bit chars, c has value 255
	signed char c2 = 256; // assuming 8-bit chars, c2 is undefined
}
