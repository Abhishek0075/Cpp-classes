//============================================================================
// Name        : cpp.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class set{
	int m,n;
public:
	void input(void);
	void display(void);
	int largest(void);
};

void set::input(void){
	cout<<"Input values of m and n "<<endl;
	cin>>m>>n;
}
void set::display(void){
	cout<<"Largest value = "<<largest()<<endl;
}
int set::largest(void){
	if(m>n){
		return m;
	}else{
		return n;
	}
}
int main() {
	set A;
	A.input();
	A.display();
	return 0;
}
