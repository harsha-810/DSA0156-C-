#include<iostream>
#include<string>
using namespace std;
class vehicle{
	string model;
	int reg_num;
	int speed;
	int fuelCapacity;
	int fuelConsumption;
	public:
	vehicle(string m, int r, int s, int fc, int fco)
        : model(m), reg_num(r), speed(s), fuelCapacity(fc), fuelConsumption(fco) {}
        
         vehicle() : model(""), reg_num(0), speed(0), fuelCapacity(0), fuelConsumption(0) {}
		void getdata(){
			cout<<"Model:";
			cin>>model;
			cout<<"Registration number:";
			cin>>reg_num;
			cout<<"Speed:";
			cin>>speed;
			cout<<"Fuel Capacity:";
			cin>>fuelCapacity;
			cout<<"Fuel Consumption";
			cin>>fuelConsumption;
		}
		void display(){
			cout<<"Model:"<<model<<endl;
			cout<<"Registration number:"<<reg_num<<endl;
			cout<<"Speed:"<<speed<<endl;
			cout<<"Fuel Capacity:"<<fuelCapacity<<endl;
			cout<<"Fuel Consumption:"<<fuelConsumption<<endl;
		}
		int fn(int d){
			return d/fuelConsumption;
		}
		int dc(int t){
			return speed*t;
		}
};
class Bus:public vehicle{
	public:
		 Bus(string m, int r, int s, int fc, int fco)
        : vehicle(m, r, s, fc, fco) {}
        
        Bus() : vehicle() {}
		void datab(){
			cout<<"Bus Info:"<<endl;
			getdata();
			cout<<endl;
			display();
			int d=100,t=2;
			cout<<"fuel needed:"<<fn(d)<<endl;
			cout<<"distance covered:"<<dc(t)<<endl;
			cout<<endl;
		}
};
class Truck:public vehicle{
	public:
		  Truck(string m, int r, int s, int fc, int fco)
        : vehicle(m, r, s, fc, fco) {}
        
        Truck() : vehicle() {}
		void datat(){
			cout<<"Truck Info:"<<endl;
			getdata();
			cout<<endl;
			display();
			int d=100,t=2;
			cout<<"fuel needed:"<<fn(d)<<endl;
			cout<<"distance covered:"<<dc(t)<<endl;
		}
};
int main()
{
	Bus b;
	b.datab();
	Truck t;
	t.datat();
}
