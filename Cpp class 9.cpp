//============================================================================
// Name        : Cpp.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class M{
	int x,y;
public:
	void set_xy(int a,int b){
		x=a;
		y=b;

	}
	friend int sum(M m);

};
int sum(M m){
	int M::*px=&M::x;
	int M::*py=&M::y;
	M *pm=&m;
	int s=m.*px+pm->*py;
	return s;
}

int main() {
	M n;
	void(M::*pf)(int,int)
			=&M::set_xy;
	(n.*pf)(10,20);
	cout<<"Sum = ="<<sum(n)<<endl;
	M *op=&n;
	(op->*pf)(30,40);
	cout<<"Sum = "<<sum(n)<<endl;
	return 0;
}
