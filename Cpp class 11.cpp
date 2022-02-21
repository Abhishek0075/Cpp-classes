//============================================================================
// Name        : Cpp.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstring>//new library used
using namespace std;
class strings{
	char *name;
	int length;
public:
	strings(){
		length=0;
		name=new char[length+1];
	}
	strings(const char *s){
		length=strlen(s);
		name=new char[length+1];
		strcpy(name,s);
	}
	void display(void){
		cout<<name<<endl;
	}
	void join(strings a,strings b);
};
void strings::join(strings a,strings b){
	length=a.length+b.length;
	delete name;
	name=new char[length+1];
	strcpy(name,a.name);
	strcat(name,b.name);
}
int main() {
	strings name1("Rakesh "),name2("Kumar "),name3("Sinha "),s1,s2 ;
	s1.join(name1,name2);
	s2.join(s1,name3);
	name1.display();
	name2.display();
	name3.display();
	s1.display();
	s2.display();


	return 0;
}
