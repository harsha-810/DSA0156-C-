#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n,a[n];
	cout<<"Enter size of array:";
	cin>>n;
	cout<<"Enter elements in array:";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	cout<<"Sorted array:"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
