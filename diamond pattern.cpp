#include <iostream>
using namespace std;

int main()
{
	int n,m;
	cout<<"Enter a limit: ";
	cin>>n;
	cout<<"Enter no of diamonds : ";
	cin>>m;
	
	for(int i=1;i<=m;i++)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=n;j>=i+1;j--)
				cout<<" ";
			for(int j=1;j<=i;j++)
				cout<<j<<" ";
			cout<<endl;
		}
		for(int i=n-1;i>=1;i--)
		{
			for(int j=1;j<=n-i;j++)
				cout<<" ";
			for(int j=1;j<=i;j++)
				cout<<j<<" ";
			cout<<endl;
		}
	}
}
