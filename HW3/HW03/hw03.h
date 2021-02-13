#pragma once

#include <iostream>
#include <string>
#include "hw03.h"

using namespace std;
int i;
int k = 0;

int box(int boxSize, string boxWords) {

	for ( i = 0; i <= 10 + boxSize; i++) {
		cout << "*";
		}
	cout << endl;

	for (int j = 0; j <= i; j++) {


		if (j == 0 || j == i -1) {
			cout << "*";
			while (k != 1) {
				cout << boxWords;
				k++;
			}
		}
		else {

			cout << " ";
		}
	}

	cout << endl;


	for (int i = 0; i <= 10 + boxSize; i++) {
		cout << "*";
	}


	return(0);
}
