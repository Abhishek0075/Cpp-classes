//============================================================================
// Name        : Cpp.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class code{
	int id;
public:
	code(){
	}
	code(int a ){
		id=a;
	}
	code(const code &x){//copy constructor
		id=x.id;
	}
	void display(){
		cout<<id<<endl;
	}
};
int main() {
	code A(550);
	code B(A);//calls copy constructor
	code C=A;//Also copy constructor Same as C(A)
	code D;
	D=A;
	A.display();
	B.display();
	C.display();
	D.display();
	return 0;
}
