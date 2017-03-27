#include <iostream>
using namespace std;

int gcb(int a,int b){
	int L, S, t;
	
	if (a > b){
	L = a;S = b;
	}
	else{
	L = b;S = a;
	}
	do{
	t = L % S;
	L = S;
	S = t;
	}while (t!=0);
	return L;
}

int main(){
	int a,b;
	
	if (!(cin >> a)){
			cout << "please enter an integer!" <<endl;
			cin.clear();
			cin.ignore(10,'\n');
		}
	if (!(cin >> b)){
			cout << "please enter an integer!" <<endl;
			cin.clear();
			cin.ignore(10,'\n');
		}
	cout << gcb(a,b) << endl;
}
