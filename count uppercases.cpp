#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	int count=0;
	cout<<"Enter the string:"<<endl;
	getline(cin,s);
	for(int i=0;i<s.length();i++)
	{ char ch=s[i];
		if(ch>='A'&& ch<='Z')
		{
			count++;
		}
	}
	cout<<"Count:"<<count;
}
