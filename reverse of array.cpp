#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n,a[n];
	cout<<"Enter the size of array"<<endl;
	cin>>n;
	cout<<"Enter the elements"<<endl;
	for(int i=0;i<n;i++)
	{
	  cin>>a[i];	
	}
	reverse(a,a+n);
	cout<<"Reversed array:";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
