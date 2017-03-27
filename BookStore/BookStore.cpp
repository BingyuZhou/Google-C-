/*
 * BoolStore.cpp
 *
 *  Created on: Mar 26, 2017
 *      Author: bingyu
 */

#include <iostream>
#include <string>
using namespace std;

double totalcost(int enroll, double price, int num_hand, bool imp, bool quality){
	int num, num_order;
	double cost;

	if (quality & imp)
		num = 0.9*enroll;
	if (!quality & imp)
		num = 0.65*enroll;
	if (quality & !imp)
		num = 0.4*enroll;
	if (!quality & !imp)
		num = 0.2*enroll;

	num_order = num - num_hand;
	cost = num_order * price;
	cout << "********************"<< endl;
	cout << "Need to order: "  << num_order << endl;
	cout << "Total cost: $" << cost << endl;
	return cost;

}

int main(){
	string code;
	double price, totcost=0;
	bool flag = 1;
	int num_hand, enroll;
	bool imp, quality;

	do{
		// ask for information
		cout << "Bood code: "; cin >> code;
		cout << "Single price: "; cin >> price;
		cout << "Num on hand: "; cin >> num_hand;
		cout << "Prospective enrollment: "; cin >> enroll;
		cout << "1 for reqd / 0 for optional: "; cin >> imp;
		cout << "1 for new / 0 for used: "; cin >> quality;

		cout << "***************" << endl;
		cout << "Book: " << code << endl;
		cout << "Price: " << price << endl;
		cout << "Inventory: " << num_hand << endl;
		cout << "Enrollment: " << enroll << endl;

		totcost = totcost + totalcost(enroll, price, num_hand, imp, quality);

		cout << "Enter 1 to do another book, 0 to stop: "; cin >> flag;

	}while (flag);

	cout << " Total cost for all orders: " << totcost << endl;
	cout << " Profits: $" << totcost * 0.2 << endl;


}


