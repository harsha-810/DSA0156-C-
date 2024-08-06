#include<iostream>
#include<cmath>
using namespace std;
class areacal{
	double a;
	public:
		areacal(double r){
			a=M_PI*r*r;
		}
		areacal(double l,double w){
			a=l*w;
		}
		areacal(double b,double h,bool isTriangle){
			a=0.5*b*h;
		}
		double displayarea(){
			return a;
		}
};
int main()
{
	areacal c(3);
	cout<<"Area of circle:"<<c.displayarea()<<endl;
	areacal r(4,5);
	cout<<"Area of rectangle:"<<r.displayarea()<<endl;
	areacal t(6,5,true);
	cout<<"Area of triangle:"<<t.displayarea()<<endl;
}
