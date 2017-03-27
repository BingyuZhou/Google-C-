// cricket chirps

#include <iostream>
using namespace std;

int main(){
	int chirps;
	double temp;
	if (!(cin >> chirps)){
		cout << "Enter a number" << endl;
		return 0;
	}
	temp = (40 + chirps) / 4;
	cout << "Temperature: " << temp << "degrees."<< endl;
	return 0;
}
