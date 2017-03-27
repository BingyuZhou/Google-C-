#include <iostream>

using namespace std;

class Box{
	private:
		double length;
		double breadth;
		double height;
		
	public:
		static int obj;
		
		Box(double l = 2, double b = 1, double h =1){
			length = l;
			breadth = b;
			height = h;
			obj++; //count how many objects build up
		}
		
		double volume(){
			return length*breadth*height;
		}
		
		int compare(Box box){
			return this->volume() > box.volume(); 
			// "this" is a pointer pointed to all membership functions
		}
};

int Box::obj = 0;

int main(){
	
	Box box(2,4,1);
	Box boxx(2,2,2);
	Box box2(1,1,1);
	Box *p; // pointer to a class
	
	cout << Box::obj <<endl;
	
	p = &box;
	
	cout << p->volume() <<endl; 
	
	if (box.compare(boxx)){
		cout << "box is bigger is than boxx";
	}
	else
		cout << "box is equal or smaller than boxx";
}
