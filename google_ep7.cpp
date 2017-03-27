#include <iostream>
using namespace std;

#define shoeprice 225
#define weeklyhour 40
#define salaryhour 7
#define commission2 0.1
#define commission3 0.2
#define salaryunit 20
#define salary 600

int GetInput(){
	int WeeklySales;
	if (!(cin >> WeeklySales)){
	cout << "Numbers only" <<endl;
	return 0;
	}
	else{
	return WeeklySales;
	}
}

void CalcMethod1(int WeeklySales){
	cout << "WeeklySales: " << salary <<endl;
}

void CalcMethod2( int WeeklySales){
	double money;
	money = salaryhour * weeklyhour + commission2*WeeklySales*shoeprice;
	cout << "WeeklySales: " << money <<endl;
}

void CalcMethod3( int WeeklySales){
	double money;
	money = commission3*WeeklySales*shoeprice + salaryunit*WeeklySales;
	cout << "WeeklySales: " << money <<endl;

}
int main(){
	int WeeklySales;
	WeeklySales = GetInput();
	CalcMethod1(WeeklySales);
	CalcMethod2(WeeklySales);
	CalcMethod3(WeeklySales);

}
