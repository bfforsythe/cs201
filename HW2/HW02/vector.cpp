#include <iostream>;
#include <string>;
#include <vector>;
#include <algorithm>;

using namespace std;

int main() {
	int j;
	vector<string> names;
	for (int i = 0; i < 10; i++) {
		string name;
			cout << "Please Enter " << 10 -i << " More Names ";
			getline(cin, name);
			names.push_back(name);
		}
	



	// ##### Search Function #####

	/*string SearchName;
	string searchQuery;

	cout << "Please Enter a Name to Check if it Exists!";
	cin >> SearchName;
	
	for (int k = 0; k < names.size(); k++) {
		string searchQuery = names.at(k);
		if (SearchName == searchQuery) {
			cout << "Yep! " << SearchName << " exists!";
		}
	} */



	//##### List Function #####

	/*for (int l = 0; l < names.size(); l++) {
		cout << "You Entered ";
		cout << names.at(l) << endl << endl;
		if (l < 9) {
			cout << "and" << endl << endl;
		}
	} */

	//##### Letter Counting #####
	// a = 97 , z = 122
	for (int let = 0; let < names.size(); let++) {
		string length = names.at(let);

		cout << length.length() << endl;
	}

	return(0);
}
