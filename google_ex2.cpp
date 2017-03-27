// Final grade 

#include <iostream>
using namespace std;

int  *GetInput(){
	int assign1, assign2, assign3, assign4;
	int mid, fin,section;
	static int grade[7];
	if (!(cin >> assign1)){
		cout << " Enter a number" <<endl;
		return 0;
	}
	if (!(cin >> assign2)){
		cout << " Enter a number" <<endl;
		return 0;
	}
	if (!(cin >> assign3)){
		cout << " Enter a number" <<endl;
		return 0;
	}
	if (!(cin >> assign4)){
		cout << " Enter a number" <<endl;
		return 0;
	}
	if (!(cin >> mid)){
		cout << " Enter a number" <<endl;
		return 0;
	}
	if (!(cin >> fin)){
		cout << " Enter a number" <<endl;
		return 0;
	}
	if (!(cin >> section)){
		cout << " Enter a number" <<endl;
		return 0;
	}
	
	grade[0]  = assign1; grade[1] = assign2; grade[2] = assign3; grade[3] = assign4;
	grade[4] = mid; grade[5] = fin; grade[6] = section;
	return grade;
}

void computgrade(int * grade){
	double finalgrade;
	finalgrade = (grade[0]+grade[1]+grade[2]+grade[3])/4*0.4 + 0.15*grade[4] + 0.35*grade[5] + 0.1*grade[6];
	cout << "Final grade: " << finalgrade <<endl;
}


int main(){
	int *p;
	p = GetInput();
	computgrade(p);
}
