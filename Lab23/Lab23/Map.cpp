#include <iostream>
#include <map>
#include <iterator>

using std::map;
using std::pair;


int main() {

	map<int, int> testMap;

	testMap.insert(pair<int,int>(2, 40));
	testMap.insert(pair<int,int>(3, 35));
	testMap.insert(pair<int,int>(4, 30));
	testMap.insert(pair<int,int>(5, 25));
	testMap.insert(pair<int,int>(6, 20));


	std::map<int, int>::iterator itr;

	std::cout << "  FULL MAP" << "\n\n" << "KEY" << "\t" << "VALUE" << std::endl;

	for (itr = testMap.begin(); itr != testMap.end(); itr++) {
		std::cout << itr->first << "\t  " << itr->second << std::endl;
	}

	std::cout << "\n\n\n" << "MAP AFTER REMOVAL" << std::endl << 

	testMap.erase(2);
	testMap.erase(4);
	
	for (itr = testMap.begin(); itr != testMap.end(); itr++) {
		std::cout << itr->first << "\t  " << itr->second << std::endl;
	}

	return(0);
}