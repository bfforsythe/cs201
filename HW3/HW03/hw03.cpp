#include <iostream>
#include <string>
#include "hw03.h"

int boxSize;
string boxWords;
using namespace std;

int main() {

	cout << "Please Enter Box Size " << endl;
	cin >> boxSize;

	cout << "Now Enter a String of Words " << endl;
	cin >> boxWords;

	box(boxSize,boxWords);

	return(0);


}