#include <string>
#include <sstream>
#include <iostream>
#include <vector>
#include "tokenizer.h"

using namespace std;

int main() {

	bool ReadLine(string & str); {
		getline(cin, str);

		if (str.empty()) {
			cout << "Nothing Was Entered";
		}
		else {
			parse();
		}
	}
}