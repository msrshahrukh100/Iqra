// OOPS LAB ASSSIGNMENT 
// SUBMITTED BY
// Mohammad Shahrukh    13BCS-0044

#include <iostream>
#include <math.h>
using namespace std;
class Oned
{
protected:
	int x;
};

class Twod : protected Oned 
{
protected:
	int y;

};

class Threed : protected Twod
{
	int z;
public:
	void get_data()
	{
		cout<<"Enter the value of x,y and z coordinates respectively : ";
		cin>>x>>y>>z;
	}
	float operator * (Threed abc)
	{
		float temp;
		temp = (this->x - abc.x)*(this->x - abc.x) + (this->y - abc.y)*(this->y - abc.y) + (this->z - abc.z)*(this->z - abc.z);
		return sqrt(temp);
	}

};

int main()
{
	Threed obj1,obj2;
	obj1.get_data();
	obj2.get_data();
	cout<<"The distance between the two entered points is : "<<obj1*obj2<<endl; 
	return 0;
}