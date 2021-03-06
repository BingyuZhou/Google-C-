#include <iostream>
#include <string>
#include <map>
using namespace std;

char *readin(){
	static char s[5];
	if(!(cin >> s)){
		cout << "Enter the code on the food package." <<endl;
		return 0;
	}
	else 
	return s;
}

void date(char *s){

	string month;
	int day, year;
	
	map<char, string> months = {{'A', "Jan"}, {'B', "Feb"}, {'C', "Mar"}, {'D', "Apr"}, {'E', "May"}, {'F', "Jun"}, {'G', "Jul"}, {'H', "Aug"}, {'I', "Sep"}, {'J', "Oct"}, {'K', "Nov"}, {'L', "Dec"}};
	
	map<char, int> digits = {{'Q', 0}, {'R', 1}, {'S', 2}, {'T', 3}, {'U',4}, {'V', 5}, {'W', 6}, {'X',7}, {'Y', 8}, {'Z', 9}};
	
	month = months[s[0]];
	day = (digits.find(s[1])->second)*10 + digits.find(s[2])->second;
	year = (int)s[3]-64+1995;
	
	cout << "Date: "<< month << " " << day << " " << year <<endl;

}

int main(){
	char *s;
	s = readin();
	date(s);
}
