//============================================================================
// Name        : Cpp.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class sample{
	int a;
	int b;
public:
	void setvalue(int x,int y){
		a=x;
		b=y;
	}
	friend float mean(sample s);
};
float mean(sample s){
	return float(s.a+s.b)/2;//float after return is used to get the float form of
}                           //average or else the result will be int
int main() {
	sample x;
	x.setvalue(25,40);
	cout<<"Mean value = "<<mean(x)<<endl;
	return 0;
}
