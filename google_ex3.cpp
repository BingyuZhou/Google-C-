// stopwatches

#include <iostream>
using namespace std;

int GetInput(){
int time;
if (!(cin >> time)){
		cout << " Enter a number" <<endl;
		return 0;
	}
else
return time;
}

int computetime(int time){
	int hour, min, sec;
	sec = time % 60;
	min = (time/60)%60;
	hour = time/3600;
	cout << "hours: " << hour <<endl;
	cout << "minutes: " << min <<endl;
	cout << "seconds: " << sec <<endl;
	
}

int main(){
	int time;
	time =GetInput();
	computetime(time);
}
