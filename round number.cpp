#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float n;
	int f,c;
	cout<<"Enter the number:";
	cin>>n;
	f=floor(n);
	c=ceil(n);
	if((n-f)<(c-n))
	{
		cout<<"Round number:"<<f;
	}
	else
	{
		cout<<"Round number:"<<c;
	}
}
