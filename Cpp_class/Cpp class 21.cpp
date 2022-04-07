//============================================================================
// Name        : Cpp.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class B{
	int a;
public:
	int b;
	void getab();
	void showa();
	int geta();
};
class D:public B{
	int c;
public:
	void mul();
	void display();

};
void B::getab(){
	a=5;
	b=10;
}
int B::geta(){
	return a;
}
void B::showa(){
	cout<<"a = "<<a<<endl;
}
void D::mul(){
	c=b*geta();
}
void D::display(){
	cout<<"a = "<<geta()<<endl;
	cout<<"b = "<<b<<endl;
	cout<<"c = "<<c<<endl;
}
int main() {
	D d;
	d.getab();
	d.mul();
	d.showa();
	d.display();
	d.b=20;
	d.mul();
	d.display();
	return 0;
}
