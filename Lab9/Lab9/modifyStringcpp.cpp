#include <iostream>;
#include <string>;
#include <vector>;
using namespace std;

int main(string& referencedString, int n) {
	int stringInt;

	cout << "Please Enter a Number";
	cin >> stringInt;

	string convert = to_string(stringInt);
	cout << "String Size:";
	cout << convert.length() << endl;

	cout << "Text Original:";
	cout << convert << endl;
	return(0);
}
