#include<iostream>
using namespace std;
class vehicle{
	char modelname[20];
	int fuel;
	int price;
	public:
		void getvalue();
		void setvalue();
};

void vehicle::setvalue(){
	cin>>modelname>>fuel>>price;
	
};
void vehicle::getvalue(){
	cout<<"model name is "<<modelname<<endl<<"fuel availability in litres "<<fuel<<endl<<"price of vehicle "<<price<<endl;
	
}
int main(){
	vehicle m1; 
	cout<<"enter model name of vehicle, fuel , price"<<endl;
	m1.setvalue();
	m1.getvalue();
	
}
