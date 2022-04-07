//============================================================================
// Name        : Cpp.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//============================================================================
// Name        : Cpp.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstring>
using namespace std;
class time{
	int hr,min;
public:
	time(){
		hr=0;
		min=0;
	}
	time(int t){
		hr=t/60;
		min=t%60;
	}
	void display(){
		cout<<hr<<" hours and ";
		cout<<min<<" minutes"<<endl;
	}
};
int main(){
	time T;
	int value=85;
	T=value;//it calls the constructor which takes argument of type int where value is of type int
	T.display();
	return 0;
}
