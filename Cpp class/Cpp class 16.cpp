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
	friend space operator -(space);
};
space::space(int a,int b,int c){
	x=a;y=b;z=c;
}
void space::display(){
	cout<<x<<" "<<y<<" "<<z<<endl;
}

space operator -(space a){
	space s;
	s.x=-a.x;
	s.y=-a.y;
	s.z=-a.z;
	return s;
}

int main() {
	space s(100,-200,300),k;
	cout<<"s : ";
	s.display();
	k=-s;
	cout<<"k= ";
	k.display();
	return 0;
}
