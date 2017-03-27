#include <iostream>

using namespace std;

class Box{
	double width;
	public:
	friend void printwidth(Box box);
	void setwidth(int wid){
		width = wid;
	}
};

void printwidth(Box box){
	cout << box.width <<endl;

}

int main(){
	Box box;
	
	box.setwidth(10);
	printwidth(box);
}

