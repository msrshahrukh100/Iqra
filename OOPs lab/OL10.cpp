// OOPS LAB ASSSIGNMENT 
// SUBMITTED BY
// Mohammad Shahrukh    13BCS-0044

#include <iostream>
using namespace std;
class Average
{
	float a,b,c,d,e;

	friend void friendfunc1(Average*);
	friend void friendfunc2(Average*); 

public:
	float avg()
	{

		return (a+b+c+d+e)/5;
	}


};

void friendfunc1(Average *a1)
{
	float t1,t2;
	cout<<"Enter two numbers: ";
	cin>>t1>>t2;
	a1->a = t1;
	a1->b = t2;
}

void friendfunc2(Average *a2)
{
	float t1,t2,t3;
	cout<<"Enter three numbers: ";
	cin>>t1>>t2>>t3;
	a2->c = t1;
	a2->d = t2;
	a2->e = t3;
}

int main()
{
	Average obj;
	friendfunc1(&obj);
	friendfunc2(&obj);

	cout<<"The average of the 5 numbers is : "<<obj.avg()<<endl;

	
	return 0;
}