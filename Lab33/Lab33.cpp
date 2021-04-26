#include <iostream>
#include <string>


class testClass {
public:
	int coolNumberforallthenicechildren;
	std::string lessCoolWords;
};

int main() {

	testClass testObject;

	testObject.coolNumberforallthenicechildren = 1337;
	testObject.lessCoolWords = "Have you got ants in your pants?";


	std::string strngint = std::to_string(testObject.coolNumberforallthenicechildren);

	std::cout << testObject.coolNumberforallthenicechildren << "\n";
	std::cout << testObject.lessCoolWords << "\n";
	std::cout << strngint;

	return(0);
}