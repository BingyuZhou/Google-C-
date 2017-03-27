

#include <iostream>

using namespace std;


class car{
	protected:
		double position[2];
		double heading;
		double steering;
		double vel;
		double acc;
};

class volvo:car{
	public:
	void setPos(double *pos){
		position[0] = *pos;
		position[1] = *pos+1;
	};
	double* getPos(){
	return position;
	}
};
int main(){
    volvo car1;
    
    double pos[] = {2,3};
    
    car1.setPos(pos);
    
    volvo car2 = car1;
    cout << pos[1] << endl;
    cout << *car2.getPos();
}
