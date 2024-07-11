#include<iostream>
using namespace std;
class Degree{
	public:
		void getdegree(){
			cout<<"I got a degree"<<endl;
		}
};
int main()
{
	Degree mydegree;
	mydegree.getdegree();
}
