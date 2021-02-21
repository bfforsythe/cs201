#include <string>
#include <sstream>
#include <iostream>

using namespace std;

int main() {

	
	bool ReadLine(string & str); {
		string str;
		getline(cin, str);

		if (str.empty()) {
			cout << "False";
		}
		else {
			cout << "True";
		}
	}
}