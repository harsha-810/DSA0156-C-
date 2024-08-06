#include<iostream>
using namespace std;
int main()
{
	int a[10][10],b[10][10],c[10][10],i,j,m,n;
	cout<<"Enter the number of rows:"<<endl;
	cin>>m;
	cout<<"Enter the number of columns:"<<endl;
	cin>>n;
	cout<<"Enter the elements of matrixA:"<<endl;
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"Enter the elements in the matrxB:"<<endl;
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			cin>>b[i][j];
		}
	}for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
	c[i][j]=a[i][j]+b[i][j];}
}
	cout<<"The result of the matrix:"<<endl;
	for(i=1;i<=m;i++){
		for(j=1;j<=n;j++){
			cout<<c[i][j]<<" ";
		}
		cout<<endl;
	}
}
