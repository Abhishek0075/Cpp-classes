//============================================================================
// Name        : Cpp.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class test{
	int code;
	static int count;
public:
	void setcode(void){
		code=++count;
	}
	void showcode(void){
		cout<<endl<<"Object number : "<<code<<endl;
	}
	static void showcount(void){
		cout<<"Total objects now : "<<count<<endl;
	}
};
int test::count;
int main() {
	test t1,t2,t3;
	t1.setcode();
	t1.showcode();
	test::showcount();
	t2.setcode();
	t2.showcode();
	test::showcount();
	t3.setcode();
	t3.showcode();
	test::showcount();



	return 0;
}
