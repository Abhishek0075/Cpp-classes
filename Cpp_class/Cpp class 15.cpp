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
	friend void operator -(space&);
};
space::space(int a,int b,int c){
	x=a;y=b;z=c;
}
void space::display(){
	cout<<x<<" "<<y<<" "<<z<<endl;
}

void operator -(space &a){//if & not given the making into negative doesnt happens
	a.x=-a.x;
	a.y=-a.y;
	a.z=-a.z;
}

int main() {
	space s(100,-200,300);
	s.display();
	-s;
	cout<<"s= ";
	s.display();
	return 0;
}
