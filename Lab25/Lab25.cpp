#include <iostream>
#include <vector>
#include <algorithm>


int main() {

	std::vector<int> data1{ 6, 9, 4, 99, 199, 66, 7 };
	std::vector<int> data2{ 6, 9, 4, 99, 23, 66, 7 };

	std::pair< std::vector<int>::iterator,
		std::vector<int>::iterator > itr;

	itr = std::mismatch(data1.begin(), data1.end(), data2.begin());


	std::cout << "The Mismatched Pairs Are: \n \n";

	std::cout << *itr.first << " and " << *itr.second; "\n";


	return (0);
}