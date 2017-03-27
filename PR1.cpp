#include <iostream>
using namespace std;
const int MAX =3;

int main(){
	int a[]={10,100,200};
	int *p;

	p = &a[0];
	int i=0;
	
	for (int i=0; p <= &a[MAX-1]; ++i){
	cout << "Address of var[" << i << "] = ";
	cout << p << endl;
	cout << "Value of var[" << i << "] = ";
	cout << *p << endl;  
	p++;
	}
	return 0;
}

