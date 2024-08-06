#include <iostream>
using namespace std;
class point{
	int x,y;
	public:
	 point(int x1,int x2)
	 {
	 	x=x1;
	 	y=x2;
	 }
	 point(const point &p)
	 {
	 	x=p.x;
	 	y=p.y;
	 }
	 void display()
	 {
	 	cout<<"x= "<<x<<",y= "<<y<<endl;
	 }
};
int main(){
	point p1(10,20);
	point p2=p1;
	p1.display();
	p2.display();
}
