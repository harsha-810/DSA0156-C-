#include<iostream>
using namespace std;
class Bank{
	public:
		int getbalance() const{
		return 0;}
};
class BankA:public Bank{
	public:
		int getbalance() const{
		return 1000;}
};
class BankB:public Bank{
	public:
		int getbalance() const{
		return 1500;}
};
class BankC:public Bank{
	public:
		int getbalance() const{
		return 2000;}
};
int main()
{
	BankA banka;
	BankB bankb;
	BankC bankc;
	cout<<"BankA:"<<banka.getbalance()<<endl;
	cout<<"BankB:"<<bankb.getbalance()<<endl;
	cout<<"BankC:"<<bankc.getbalance()<<endl;
}
