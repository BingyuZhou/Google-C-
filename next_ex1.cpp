#include <iostream>
#include <math.h>
using namespace std;

int square(int x){
	return x*x;
}

int serie(int y){
	return (sqrt(8*y+1)-1)/2;
}

int main(){
	int x=1, y;
	int n;
	int i = 1;
	
	do{
		y = square(x);
		n = serie(y);
		if ((1+n)*n/2 == y){
			i++;
			cout << "I find the magic number: " << y << endl;
		}
		x++;
	}while(i<=4);
}
