#include <iostream>;
#include <string>;
#include <vector>;
#include <algorithm>;

using namespace std;

int main() {
	vector<string> names;
	for (int i = 0; i < 10; i++) {
		string name;

		for (int j = 10; j > 0; j--) {
			cout << "Please Enter " << j << " More Names ";
			getline(cin, name);
		}
		
	}

	return(0);
}