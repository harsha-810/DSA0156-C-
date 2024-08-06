#include<iostream>
using namespace std;
int Max_Water(int a[],int n){
	int r=0;
	for(int i=0;i<n;i++){
		int left=a[i];
		for(int j=0;j<i;j++)
		 left=max(left,a[j]);
		int right=a[i];
		for(int j=i+1;j<n;j++)
	   right=max(right,a[j]);
		r=r+(min(left,right)-a[i]);
	}
	cout<<"The trapping of water is "<<r;
}
int main()
{
	int a[]={0,1,0,2,1,0,1,3,2,1,2,1};
	int n=sizeof(a)/sizeof(a[0]);
	Max_Water(a,n);
}
