#include <iostream>
#include <vector>
#include <algorithm>


int main() {

	std::vector<int> modVec{ 3, 12, 4, 6, 9, 11, 44, 56, 2, 8 };
	std::vector<int> modVecCopy(10);

	std::copy(modVec.begin(), modVec.end(), modVecCopy.begin());



	
	std::cout << "Original List: " << std::endl;

	for (int i = 0; i <= 9; i++) {
		std::cout << modVec.at(i) << ", ";

	}

	std::cout << "\n\n";





	std::cout << "Sorted List: " << std::endl;

	std::sort(modVec.begin(), modVec.end());

	for (int i = 0; i <= 9; i++) {
		std::cout << modVec.at(i) << ", ";

	}

	std::cout << "\n\n";




	std::cout << "Reversed List: " << std::endl;

	std::reverse(modVecCopy.begin(), modVecCopy.end());

	for (int i = 0; i <= 9; i++) {
		std::cout << modVecCopy.at(i) << ", ";

	}

	std::cout << "\n\n";



	std::reverse(modVecCopy.begin(), modVecCopy.end()); // Reversing the copy again to reuse.

	std::cout << "Filled Space: " << std::endl;

	std::fill(modVecCopy.begin(), modVecCopy.begin() + 5, 420);
	std::fill(modVecCopy.begin() + 5, modVecCopy.begin() + 10, 240);

	for (int i = 0; i <= 9; i++) {
		std::cout << modVecCopy.at(i) << ", ";

	}



	return(0);
}