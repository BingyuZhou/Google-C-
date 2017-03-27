#include <iostream>
using namespace std;
const int MAX=4;

int main() {
string *p[4];
char a[] = {'b', 'n', 'p', 'm'};
string b[] = {"banana","apple","pear", "mango"};
for (int i=0; i<MAX; ++i){
p[i] = &b[i];
cout << *p[i] <<endl;
}
cout << *(b+1) <<endl;
cout << *(b+2) <<endl;
return 0;
}
