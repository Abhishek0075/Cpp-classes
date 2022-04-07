//============================================================================
// Name        : Cpp.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class integer{
	int m,n;
public:
	integer(){
		m=0;
		n=0;
		cout<<m<<"  "<<n<<endl;
	}
	integer(int a,int b){
		m=a;
		n=b;
		cout<<m<<"  "<<n<<endl;
	}
	integer(const integer &i){//To get a right copy constructor Add Const in the arguments
		m=i.m;
		n=i.n;
		cout<<m<<"  "<<n<<endl;
	}
};
int main() {
	integer I1;
	integer I2(200,400);
	integer I3(I2);
	return 0;
}
