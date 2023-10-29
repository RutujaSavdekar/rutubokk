#include<iostream>
#include <string>
using namespace std;
class book{
private:
	string bname;
	int id;
	string author;
	double price;
	
	
public:
	void acceptBook (){
		cout<<"Enter Book Name:";
		cin>>bname;
		cout<<endl;
		cout<<"Enter Book Id:";
		cin>>id;
		cout<<endl;
		cout<<"Enter Bookauthor:";
		cin>>author;
		cout<<endl;
		cout<<"Enter Book price:";
		cin>>price;
		cout<<endl;
		
	}
	void display(){
		cout<<"Book name:"<<bname<<endl;
		cout<<"Book id:"<<id<<endl;
		cout<<"Book Author:"<<author<<endl;
		cout<<"Price:"<<price<<endl;
		
	}
	
	
};



