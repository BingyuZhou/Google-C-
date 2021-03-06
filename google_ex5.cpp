#include <iostream>

using namespace std;

int getin(){
	int x;
	cout << "input number";
	if(!(cin >> x)){
		cout << "Enter an integer" << endl;
		return 0;
	}
	else{
		if ((x / 100)> (x % 10))
			return x;
		else{
			cout << "First digit should be larger than the last digit." <<endl;
			return 0;
		}
	}
	
}

int reverse(int x){
	int first, last, mid;
	first = x / 100;
	last  = x % 10;
	mid = (x / 10) % 10;
	
	return last * 100 + mid * 10 + first;
}

int subtract(int x, int y){
	 return x-y;
}

int add(int x, int y){
	 return x+y;
}


int main(){
	int x,y,z,d,e;
	x = getin();
	y = reverse(x);
	z = subtract(x,y);
	d = reverse(z);
	e = add(z,d);
	
	cout << "reverse it: " << y <<endl;
	cout << "subtract it: " << z << endl;
	cout << "reverse it: " << d << endl;
	cout << "add: " << e << endl;
}
