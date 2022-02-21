//============================================================================
// Name        : Cpp.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class ABC;//Dummy declaration or else see what happens
class XYZ{
	int x;
public:
	void setvalue(int i){
		x=i;
	}
	friend void max(XYZ,ABC);
};
class ABC{
	int a;
public:
	void setvalue(int i){
		a=i;
	}
	friend void max(XYZ,ABC);
};
void max(XYZ m,ABC n){
	if(m.x>=n.a){
		cout<<"MAximum = "<<m.x<<endl;
	}else{
		cout<<"Maximum = "<<n.a<<endl;
	}
}
int main() {
	ABC abc;
	abc.setvalue(100);
	XYZ xyz;
	xyz.setvalue(200);
	max(xyz,abc);
	return 0;
}
