#include<iostream>
#include<string>
using namespace std;
class ELE_BILL{
	 string name;
      long number;
      int Units;
      float amount;
      public:
      	ELE_BILL(string n,long num,int U):name(n),number(num),Units(U),amount(0){}
      	void calculate(){
      		amount=Units*1.5;
		  }
		  void display(){
		  	cout<<"Name:"<<name<<endl;
		  	cout<<"Phone number:"<<number<<endl;
		  	cout<<"Number of Units:"<<Units<<endl;
		  	cout<<"Amount :"<<amount<<endl;
		  }
};
int main()
{
	ELE_BILL e("Harsha",1234567890,100);
	e.calculate();
	e.display();
}
    
