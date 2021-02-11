#pragma once

#include <iostream>
#include <string>

using namespace std;
int n;

int box(int boxSize, string boxWords) {

	//for (boxSize = 0; boxSize <= boxWords.length() + n + 1; boxSize++) {
		//cout << "*";
		for (boxSize = 0; boxSize < boxWords.length() - 1; boxSize++) {
			cout << endl;
			cout << "*";
	}
	boxSize = 0;
	cout << endl;

	return(1);
}
