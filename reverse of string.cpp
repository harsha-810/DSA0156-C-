#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string s;
	cout<<"Enter the string:";
	cin>>s;
	reverse(s.begin(),s.end());
	cout<<s;
}
