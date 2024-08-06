#include<iostream>
using namespace std;
int maxWater(int arr[], int n)
{	int res=0;
    for (int i=0;i<n;i++){
        int left=arr[i];
        for (int j=0;j<i;j++)
            left=max(left,arr[j]);
        int right=arr[i];
        for (int j=i+1;j<n;j++)
            right=max(right, arr[j]);
        res=res+(min(left,right)-arr[i]);
    }
    cout<<"The trapping rain water is ";
    return res;
	}
int main()
{   int arr[]={0,1,0,2,1,0,1,3,2,1,2,1};
    int n=sizeof(arr) / sizeof(arr[0]);
    cout << maxWater(arr, n);
}
