#include<iostream>
using namespace std;
int main()
{
	int a=10;
	int*b=&a;
	cout<<"The number is :"<<*b<<endl;
	cout<<"The address of the number is:"<<b;
}
