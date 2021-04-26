#include <random>
#include <iostream>
#include <ctime>


int Heads;
int Tails;
int num;

int main() {

	srand(time(NULL));

	for (int i = 0; i < 1000; i++) {
		num = rand() % 2;


		if (num == 0) {
			Heads++;
		}

		if (num == 1) {
			Tails++;
		}

		std::cout << num << " ";
	}



	std::cout << std::endl;
	std::cout << "Total Count: " << std::endl << std::endl;

	std::cout << "Heads: " << Heads << "\n";
	std::cout << "Tails: " << Tails << "\n";


	return(0);
}