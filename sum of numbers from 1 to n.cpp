#include<iostream>
using namespace std;
int main()
{
	int n,sum=0,i;
	cout<<"Enter the number:"<< endl;
	cin>>n;
	for(i=0;i<=n;i++)
	{
		sum=sum+i;
	}
	cout<<"The Sum of the numbers are:"<<sum<<endl;
	return 0;
}
