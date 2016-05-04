// OOPS LAB ASSSIGNMENT 
// SUBMITTED BY
// Mohammad Shahrukh    13BCS-0044

#include <iostream>
using namespace std;
class Student {
	int rn;
	string name;
public:
	void set_data(int a, string b)
	{
		rn = a;
		name = b;
	}
	void print()
	{
		cout<<"Roll number of the student is : "<<this->rn<<endl;
		cout<<"Name of the student is : "<<this->name<<endl;
	}


};
int main()
{
	Student obj1;
	obj1.set_data(44,"Shahrukh");
	obj1.print();


	
	return 0;
}