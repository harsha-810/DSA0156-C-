#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;
int main()
{
	int n;
	cout<<"Enter size of array:";
	cin>>n;
	int a[n];
	cout<<"Enter elements in array:";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n,greater<int>());
	cout<<"Sorted array in descending order:"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
