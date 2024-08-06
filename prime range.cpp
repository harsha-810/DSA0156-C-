#include<iostream>
using namespace std;
bool prime(int n)
{
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
		return false;
	}
	return true;
}
int main()
{
	int m,n;
	cout<<"range:"<<endl;
	cin>>m>>n;
	for(int i=m;i<=n;i++)
	{
		if(prime(i))
		cout<<i<<" ";
	}
}
