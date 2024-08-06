#include<iostream>
using namespace std;
int main()
{
	int a[10][10],m,n,i,j,sum=0;
	cout<<"Enter rows and columns:"<<endl;
	cin>>m>>n;
	cout<<"Enter the matrix:"<<endl;
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"Sum of the diagonal:"<<endl;
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==j)
			sum=sum+a[i][j];
		}
	}
	cout<<"Result:"<<sum;
}
