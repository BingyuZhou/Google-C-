//============================================================================
// Name        : artillery.cpp
// Author      : Bingyu
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>
using namespace std;

#define PI 3.14;

void startup(){
	cout << "Welcome to Artillery!" << endl;
	cout << "You are in the middle of a war and being charged by thousands of enemies." <<
			"You have one cannon, which you can shoot at any angle." <<
			"You only have 10 cannonballs for this target.." <<  "Let's begin..." << endl;
}

int Fire(){
	int v0 = 200; //initial velocity (ft/sec)
	double g = 32.2; //gravity
	double Dis, dis, t;
	double angle;
	int i, flag;

	//generate enemy position
	srand(time(NULL));
	Dis = rand() % 100 + 500;

	cout << "The enemy is " << Dis << endl;

	for (i = 1; i<=10; i++){
		flag = 0;
		cout << "What angle?" << endl;
		cin >> angle;
		angle = angle /180 *PI;
		t = v0*sin(angle)/g*2;
		dis = v0*cos(angle)*t;
		if (abs(dis - Dis) < 1){
			cout << "You kill it!" << endl;
			cout << "It took you " << i << " shots." << endl;
			flag = 1;
			break;
		}
		else{
			if (dis < Dis){
				cout << " You under shot by " << Dis-dis << endl;
			}
			else{
				cout << "You over shot by " << dis- Dis << endl;
			}
		}
	}

	return flag;
}

int main() {
	int killed;
	char done;

	startup();
	killed = 0;
	do{
		killed = killed + Fire();
		cout << "I see another one, care to shoot again? (Y/N)" <<endl;
		cin >> done;
	}while (done != 'n');

	cout << "you killed " << killed << " of the enemy" << endl;
	return 0;
}
