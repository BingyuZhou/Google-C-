#include <iostream>
using namespace std;

class Distance{
	private:
		int feet;
		int inches;
	public:
		Distance(int f, int i){
			feet = f;
			inches = i;
		}
		void Display(){
			cout << feet <<" "<< inches <<endl;
		}
		Distance operator-(){
			feet = -feet;
			inches = -inches;
			return Distance(feet, inches);
		}
};

int main(){
	Distance D1(11,20);
	
	-D1;
	D1.Display();
}
