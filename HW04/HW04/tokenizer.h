#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;
string str;
string i;
int j = 0;
char a = 60;
char z = 96;


// Functionality for Sorting


void AnalyzeTokens() {

	vector<string> token;
	for (int k = 0; k <= token.size(); k++){
		if (token.at(j) != "a" && token.at(j) != "z" ) {
			cout << "[integer]";
			k++;
		}
		else if (token.at(j) != "1","2","3","4","5","6","7","8","9","0") {
			cout << "[string]";
			k++;
		}
		else if (token.at(j) == " ") {
			cout << "[whitespace]";
		}
		else {
			cout << "[unknown]";
			k++;
		}
	}
}

void parse() {
	unsigned StringtoToken(const string & input, vector<string>&tokens);
	vector<string> token;
	istringstream input(str);

	while (input) {
		input >> i;
		token.push_back(i);
		if (j < token.size() - 1) {
			AnalyzeTokens();
			cout << "  " << token.at(j) << endl;
			j++;
		}

	}
	cout << "Number of Tokens are: " << token.size() - 1;
}
