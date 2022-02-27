//============================================================================
// Name        : Cpp.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class complex{
	float real;
	float imag;
public:
	void input(float r,float i){
		real=r;
		imag=i;
	}
	friend complex sum(complex,complex);
	void show();
};
//Returning objects
void complex::show(){
	cout<<real<<"+"<<imag<<"j"<<endl;
}
complex sum(complex C1,complex C2){
	complex C3;
	C3.real=C1.real+C2.real;
	C3.imag=C1.imag+C2.imag;
	return C3;
}
int main() {
	complex A,B,C;
	A.input(3.1,5.65);
	B.input(7.75,1.2);
	C=sum(A,B);
	cout<<"A = ";
	A.show();
	cout<<"B = ";
	B.show();
	cout<<"C = ";
	C.show();
	return 0;
}
