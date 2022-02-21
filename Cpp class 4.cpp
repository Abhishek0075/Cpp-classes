//============================================================================
// Name        : Cpp.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class time{
	int minutes,hours;
public:
	void gettime(int h,int m){
		hours=h;
		minutes=m;
	}
	void sum(time t1,time t2){
		minutes=t1.minutes+t2.minutes;
		hours=minutes/60;
		minutes=minutes%60;
		hours=hours+t1.hours+t2.hours;
	}
	void puttime(void){
		cout<<hours<<" hours and "<<minutes<<" minutes"<<endl;
	}
};
int main() {
	time T1,T2,T3;
	int a,b,c,d;
	cout<<"Enter first time hours = "<<endl;
	cin>>a;
	cout<<"Enter first time minutes = "<<endl;
	cin>>b;
	T1.gettime(a,b);
	cout<<"Enter second time hours = "<<endl;
	cin>>c;
	cout<<"Enter second time minutes = "<<endl;
	cin>>d;
	T2.gettime(c,d);
	T3.sum(T1,T2);
	cout<<"T1 = ";
	T1.puttime();
	cout<<"T2 = ";
	T2.puttime();
	cout<<"T3 = ";
	T3.puttime();
	return 0;
}
