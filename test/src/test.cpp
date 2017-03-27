//============================================================================
// Name        : test.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
	map <char, string> ss = {{'A',"ee"},{'B',"ww"}};
	cout << ss.find('A')->second;
	return 0;
}
