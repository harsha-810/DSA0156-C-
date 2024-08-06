#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string s;
	cout<<"Enter the string:";
	getline(cin,s);
		string o=s;
	reverse(s.begin(),s.end());
	if(o==s)
	{
		cout<<"String is palindrome";
	}
	else
	{
		cout<<"String is not palindrome";
	}
}
