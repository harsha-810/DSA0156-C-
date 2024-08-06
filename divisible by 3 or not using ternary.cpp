#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number:"<<endl;
	cin>>n;
	string r;
	r=(n%3==0)?"It is divisible by 3":"It is not divisible by 3";
	cout<<r;
}
