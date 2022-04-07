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
class D:private B{
	int c;
public:
	void mul();
	void display();

};
void B::getab(){
	cout<<"Enter values for a and b : "<<endl;//changed as private a and b cant be called from B
	cin>>a>>b;
}
int B::geta(){
	return a;
}
void B::showa(){
	cout<<"a = "<<a<<endl;
}
void D::mul(){
	getab();
	c=b*geta();
}
void D::display(){
	showa();
	cout<<"b = "<<b<<endl;
	cout<<"c = "<<c<<endl;
}
int main() {
	D d;
	d.mul();
	d.display();
	d.mul();
	d.display();
	return 0;
}
