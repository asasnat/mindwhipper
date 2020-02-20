#include <iostream>
#include <fstream>

#include <string>

#include <cstdint>

int main() {

	std::string filepath;

	std::cout << "Enter path to file: ";

	std::cin >> filepath;

	std::string cl;

	std::ifstream file(filepath);

	int memoryTape[20] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

	int ipp = 0;

	while (!file.eof()) {
		std::getline(file, cl);
		for (int x=0;x<=cl.size();x++) {
			if (cl[x] == *">") {
				ipp++;
			}
			if (cl[x] == *"<") {
				ipp--;
			}
			if (cl[x] == *"+") {
				memoryTape[ipp]++;
			}
			if (cl[x] == *"-") {
				memoryTape[ipp]--;
			}
			if (cl[x] == *"]") {
				memoryTape[ipp] += 10;
			}
			if (cl[x] == *"[") {
				memoryTape[ipp] -= 10;
			}
			if (cl[x] == *";") {
				std::cout << memoryTape[ipp];
			}
			if (cl[x] == *".") {
				uint8_t asciicode = memoryTape[ipp];
				std::cout << (char)asciicode;
			}
			if (cl[x] == *"/") {
				std::cout << std::endl;
			}
			if (cl[x] == *"'") {
				memoryTape[ipp] = 0;
			}
		}
	}
	std::cout << std::endl;
	system("pause");
}

/*
Mindwhipper Commands:
> - moves memory tape pointer to the next slot
< - moves memory tape pointer to the previous slot
+ - increments the currently accesed memory tape slot
- - decrements the currently accesed memory tape slot
] - increments the currently accesed memory tape slot by 10
[ - decrements the currently accesed memory tape slot by 10
; - prints the currently accesed memory tape slot's value
. - transforms the currently accesed memory tape slot's value into an ASCII character and then prints it onto the screen
/ - prints a new line
' - resets the currently accesed memory tape slot to zero
*/
