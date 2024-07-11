#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the size of array:";
	cin>>n;
	int a[n];
	cout<<"Enter the elements in the array:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		cout<<"The address of "<<a[i]<<"is"<<&a[i]<<endl;
	}
}
