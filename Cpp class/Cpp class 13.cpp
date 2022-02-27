//============================================================================
// Name        : Cpp.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class space{
	int x,y,z;
public:
	space(){}
	space(int,int,int);
	void display();
	void operator -();
};
space::space(int a,int b,int c){
	x=a;y=b;z=c;
}
void space::display(){
	cout<<x<<" "<<y<<" "<<z<<endl;
}
void space::operator -(){
	x=-x;
	y=-y;
	z=-z;
}
int main() {
	space s(100,-200,300);
	s.display();
	-s;
	cout<<"s= ";
	s.display();
	return 0;
}
