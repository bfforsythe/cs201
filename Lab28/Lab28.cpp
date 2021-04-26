#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

int main() {

	

	std::ofstream Lab28;
	Lab28.open("lab28.txt");
	
	for (int i = 0; i < 10; i++) {
		Lab28 << "Hello World" << "\n";
	}

	Lab28 << "\n\n\n ";
	for (int j = 1; j <= 100; j++) {
		
		Lab28 << j << std::setw(4);

		if (j % 10 == 0) {
			Lab28 << "\n";
		}
	}

	Lab28.close();


	std::ifstream Lab28Read("lab28.txt");
	std::string readString;


	while (std::getline(Lab28Read, readString)) {
		std::cout << readString << "\n";
	}

	return(0);


}