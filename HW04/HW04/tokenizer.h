#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;
string str;
string i;

void parse() {
	unsigned StringtoToken(const string & input, vector<string>&tokens);
	int j = 0;
	vector<string> token;
	istringstream input(str);

	while (input) {
		input >> i;
		token.push_back(i);
		if (j < token.size() - 1) {
			cout << token.at(j) << endl;
			j++;
		}

	}
	cout << "Number of Tokens are: " << token.size() - 1;

}
