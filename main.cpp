#include <iostream>
#include <fstream>



#include <string>

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
				std::cout << (char)memoryTape[ipp];
			}
			if (cl[x] == *"/") {
				std::cout << std::endl;
			}
		}
	}
}
