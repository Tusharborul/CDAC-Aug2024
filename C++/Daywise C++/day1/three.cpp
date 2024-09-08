#include<iostream>
using namespace std;
#include<string.h>

class employee{
	int id;
	char name[10];
	public:
		void setName();
		void setName(char a[]);
		void getName();
				
};
void employee::setName(){
	cin>>name;
};
void employee::setName(char a[]){
	strcpy(name,a);
	
};

void employee::getName(){
	cout<<name;
};

int main(){

	employee s2;
	
	cout<<"enter employee name "<<endl;
	
	s2.setName();
	s2.getName();
	cout<<"updating the employee name.... "<<endl;
	s2.setName("tushar");
	s2.getName();
	

};

