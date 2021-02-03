#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	int riceNum;
	int num;
	

	cout << "Please Enter the Tile You wish to Calculate the Value For" << endl;
	cout << "Note: Tile 10 Gives you 1024 Grains." << endl;
	cout << "Note: 10k Grains is in between tiles 13 and 14" << endl;
	cout << "Note: 1Mil Grains is between tiles 19 and 20";

	cin >> num;

	riceNum = pow(2, num);
	cout << "On Tile " << num << " You recieve " << endl << riceNum << " Grains of Rice";
	// To answer the question, once you hit maximum integer you go negative.
}