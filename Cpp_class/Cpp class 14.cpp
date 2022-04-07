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
	space operator -();
};
space::space(int a,int b,int c){
	x=a;y=b;z=c;
}
void space::display(){
	cout<<x<<" "<<y<<" "<<z<<endl;
}
space space::operator -(){
	space s;
	s.x=-x;
	s.y=-y;
	s.z=-z;
	return s;
}
int main() {
	space s(100,-200,300),k;
	s.display();
	k=-s;
	cout<<"s= ";
	k.display();
	return 0;
}
