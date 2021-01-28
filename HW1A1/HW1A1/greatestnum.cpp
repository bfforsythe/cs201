#include <iostream>
#include <conio.h>


int main() {

	using std::cout;
	using std::cin;
	using std::endl;

	cout << "--------------------------------" << endl;
	cout << "The Great Obvious Answer Machine" << endl;
	cout << "--------------------------------" << endl << endl;

	cout << "Press any button to continue" << endl << endl;
	_getch();

	cout << "Please enter three digits and I will tell you which one is the largest" << endl;

	int one, two, three, four, five = 0;

	cin >> one;
	cin >> two;
	cin >> three;
	cin >> four;
	cin >> five;

	int biggestNum = one;

	if (two > biggestNum) {
		biggestNum = two;
	}
	if (three > biggestNum) {
		biggestNum = three;
	}
	if (four > biggestNum) {
		biggestNum = four;
	}
	if (five > biggestNum) {
		biggestNum = five;
	}

	cout << "The Greatest Number is: " << biggestNum;
}