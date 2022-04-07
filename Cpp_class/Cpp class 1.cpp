//============================================================================
// Name        : Cpp.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class item{
		int num;
		float cost;
	public:
		void getdata();
		void putdata(void)
		{
			cout<<"Number = "<<num<<"\n";
			cout<<"Cost = "<<cost<<"\n";
		}
	};
void item::getdata(){
	cout<<"Enter the number and cost : "<<endl;
	cin>>num;
	cin>>cost;
}
int main() {
	item c;
	c.getdata();
	c.putdata();

	return 0;
}
