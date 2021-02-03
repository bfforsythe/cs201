#include <iostream>
#include <string>
#include <vector>
using namespace std;

void money () {

	double pennies;
	double nickles;
	double quarters;
	double dimes;
	double dollars;
	double total;

	cout << "How Much Money do YOU have?" << endl;
	cout << "---------------------------" << endl << endl;

	cout << "How Many Pennies ";
	cin >> pennies;

	cout << "How many Nickles ";
	cin >> nickles;

	cout << "How many Dimes? ";
	cin >> dimes;

	cout << "How many Quarters? ";
	cin >> quarters;

	cout << "How many Dollars? ";
	cin >> dollars;

	total = (pennies + (nickles * 5) + (dimes * 10) + (quarters * 25) + (dollars * 100)) / 100;
	
	cout << "Your Total Is: " << endl << "$" << total;

}

int main() {

	money();
	
}