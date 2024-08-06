#include<iostream>
#include<string>
using namespace std;
class student{
	string name;
	int rolln;
	public:
		void getdata()
		{
			cout<<"Name of student:"<<endl;
			cin>>name;
			cout<<"Registration number:"<<endl;
			cin>>rolln;
		}
		void display(){
			cout<<"Name:"<<name<<endl;
			cout<<"Registration number:"<<rolln<<endl;
		}
};
class s1:public student{
	public:
		void display1(){
			getdata();
			display();
		}
};
class s2:public student{
	public:
		void display2(){
			getdata();
			display();
		}
};
int main()
{
	s1 a;
	a.display1();
	s2 b;
	b.display2();
}
