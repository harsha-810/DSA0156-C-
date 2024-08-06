#include<iostream>
using namespace std;
int main()
{
	int a=3,b=5;
	cout<<"a="<<a<<"b="<<b<<endl;
	a=a^b;
	b=a^b;
	a=a^b;
	cout<<"After Swapping:"<<endl;
	cout<<"a="<<a<<endl;
	cout<<"b="<<b;
}
