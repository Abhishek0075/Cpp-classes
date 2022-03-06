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
	float x,y;
public:
	complex(){}
	complex(float real,float imag){
		x=real;
		y=imag;
	}
	complex operator +(complex);
	void display();
};
complex complex::operator +(complex c){
	complex temp;
	temp.x=x+c.x;//can also done without temp
	temp.y=y+c.y;//by return complex((x+c.x),(y+c.y))
	return temp;
}
void complex::display(){
	cout<<x<<" + "<<y<<"i"<<endl;
}
int main() {
	complex c1(3.6,4.8),c2(8.5,4.9),c3;
	c3=c1+c2;//c3=c1.operator+c2 an equivalent call
	cout<<"C1 = ";
	c1.display();
	cout<<"C2 = ";
	c2.display();
	cout<<"C3 = ";
	c3.display();
	return 0;
}
