#pragma once

#include <iostream>
#include <string>

using namespace std;

int i;

int box(int boxSize, string boxWords) {

	for ( i = 0; i < 10 + boxSize; i++) {
		cout << "*";
		}
	for (int j = 0; j < 12; j++) {
		if (j == 1 || j == 12) {
			cout << "*";
		}
		else {
			cout << " ";
		}
		cout << endl;
	}


	for (int i = 0; i < 10 + boxSize; i++) {
		cout << "*";
	}


	return(0);
}
