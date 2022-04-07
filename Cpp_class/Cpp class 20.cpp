//============================================================================
// Name        : Cpp.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class invent2;
class invent1{
	int code,item;
	float price;
public:
	invent1(int a,int b,float c){
		code=a;
		item=b;
		price=c;
	}
	void putdata(){
		cout<<"code = "<<code<<endl;
		cout<<"item = "<<item<<endl;
		cout<<"price = "<<price<<endl;
	}
	int getcode(){
		return code;
	}
	int getitem(){
		return item;
	}
	int getprice(){
		return price;
	}
	operator float(){
		return(item*price);
	}
	operator invent2();
};
class invent2{
	int code;
	float value;
public:
	invent2(){
		code=0;
		value=0;
	}
	invent2(int x,float y){
		code=x;
		value=y;
	}
	void putdata(){
		cout<<"code = "<<code<<endl;
		cout<<"value = "<<value<<endl;
	}
};
invent1::operator invent2(){
		invent2 temp(code,price*item);
		return temp;
}
int main() {
	invent1 s1(100,5,140.0);
	invent2 d1;
	float total_value;
	total_value=s1;
	d1=s1;
	s1.putdata();
	cout<<"Total = "<<total_value<<endl;
	d1.putdata();
	return 0;
}
