#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
	int secret, guess;
	
	srand(time(NULL));
	secret = rand() % 101;
	
	do {
		cout << "Make your guess:";
		if (!(cin >> guess)){
			cout << "please enter an integer!" <<endl;
			cin.clear();
			cin.ignore(1000,'\n');
		}
		else{
		if (guess > secret)
			cout << "the secret number is smaller." <<endl;
		else
			cout << "the secret number is bigger." <<endl;
			}
	}while (guess != secret);
	
	cout << "Cong!" << endl;
return 0;
}


