//============================================================================
// Name        : HW1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
const int N = 40;

inline int sum(int *p, int n, int d[]){
	for (int i=0; i<n;++i)
		*p = *p + d[i];
}
int main() {
	int i, accum = 0,data[N];

	// assign data for the
	for (i=0;i<N;++i)
		data[i] = i;
	sum(&accum,N,data);
	cout<<"sum is "<< accum<<endl;
	return 0;
}
