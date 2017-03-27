#include <iostream>
using namespace std;

int readin(){
	int s;
	if(!(cin >> s)){
		cout << "Enter the integer." <<endl;
		return 0;
	}
	else 
	return s;
}

int remainder(int s){
	int x,y,z;
	int A, B, C;
	int a,b,c;
	A = s / 100;
	B = (s / 10) % 10;
	C = s % 10;
	
	x = s % 11;
	y = (B*100 + C*10 + A) % 11;
	z = (C*100 + A*10 + B) % 11;
	
	a = x+y;
	b = y+z;
	c = z+x;
	
	if ((x + y) % 2 != 0){
		if (x+y+11 < 20)
			a = x+y+11;
		else{
			if (0< x+y-11 <20)
				a = x+y-11;
			else
				a = x+y;
		}
	}
	
	
	if ((y+z) % 2 != 0){
		if (y+z+11 <20)
			b = y+z+11;
		else{
			if (0<y+z-11<20)
				b = y+z-11;
			
		}
	}
	
	if ((z+x) % 2 != 0){
		if (z+x+11 < 20)
			c = z+x+11;
		else{
			if (0<z+x-11<20)
				c = z+x-11;
		}
	}
	
	cout << a /2 << " " << b/2 << " " << c/2 << endl;
	
}

int main(){
	int s;
	s = readin();
	remainder(s);
}
