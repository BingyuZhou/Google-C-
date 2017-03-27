/*
 * test_database.cpp
 *
 *  Created on: Mar 26, 2017
 *      Author: bingyu
 */

#include <iostream>
#include "Database.h"
#include <string>
using namespace std;

int main(){
	Database myDB;
	int action, in_yob, change;
	string in_first_name, in_last_name, in_genre, in_fact;
	do{
		cout << "Composer Database"<< endl;
		cout << "------------------------------" << endl;
		cout << "1) Add a new composer" << endl;
		cout << "2) Retrieve a composer's data" << endl;
		cout << "3) Promote/demote a composer's rank" << endl;
		cout << "4) List all composers" << endl;
		cout << "5) List all composers by rank" << endl;
		cout << "0) Quit" << endl;

		cin >> action;

		switch (action){
		case 1 :
			cout << "First name: "; cin >> in_first_name;
			cout << "Last name: "; cin >> in_last_name;
			cout << "Genre: : "; cin >> in_genre;
			cout << "Year of birth: "; cin >> in_yob;
			cout << "Fact: "; cin >> in_fact;

			myDB.AddComposer(in_first_name, in_last_name, in_genre, in_yob,in_fact);
			break;
		case 2 :
			cout << "Last name: "; cin >> in_last_name;

			myDB.GetComposer(in_last_name);
			break;
		case 3 :
		{
			cout << "Last name: "; cin >> in_last_name;
			Composer& comp = myDB.GetComposer(in_last_name);
			cout << "Promote + / Demote -: "; cin >> change;
			comp.Promote(change);
			break;
		}
		case 4 :
			myDB.DisplayAll();
			break;
		case 5 :
			myDB.DisplayByRank();
			break;
		case 0 :
			break;
		}


	}while (action != 0);
}




// Description: Test driver for a database of Composer records.
//#include <iostream>
//#include "Database.h"
//using namespace std;
//
//int main() {
//  Database myDB;
//
//  // Remember that AddComposer returns a reference to the new record.
//  Composer& comp1 = myDB.AddComposer("Ludwig van", "Beethoven", "Romantic", 1770,
//    "Beethoven was completely deaf during the latter part of his life - he never "
//    "heard a performance of his 9th symphony.");
//  comp1.Promote(1);
//
//  Composer& comp2 = myDB.AddComposer("Johann Sebastian", "Bach", "Baroque", 1685,
//    "Bach had 20 children, several of whom became famous musicians as well.");
//  comp2.Promote(8);
//
//  Composer& comp3 = myDB.AddComposer("Wolfgang Amadeus", "Mozart", "Classical", 1756,
//    "Mozart feared for his life during his last year - there is some evidence "
//    "that he was poisoned.");
//  comp3.Promote(2);
//
//  cout << endl << "all Composers: " << endl << endl;
//  myDB.DisplayAll();
//  myDB.DisplayByRank();
//}


// test_composer.cpp, Maggie Johnson
//
// This program tests the Composer class.

//#include <iostream>
//#include "Composer.h"
//using namespace std;
//
//int main()
//{
//  cout << endl << "Testing the Composer class." << endl << endl;
//
//  Composer composer;
//
//  composer.set_first_name("Ludwig van");
//  composer.set_last_name("Beethoven");
//  composer.set_composer_yob(1770);
//  composer.set_composer_genre("Romantic");
//  composer.set_fact("Beethoven was completely deaf during the latter part of "
//    "his life - he never heard a performance of his 9th symphony.");
//  composer.Promote(2);
//  composer.Demote(1);
//  composer.Display();
//}
