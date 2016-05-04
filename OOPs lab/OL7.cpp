// OOPS LAB ASSSIGNMENT 
// SUBMITTED BY
// Mohammad Shahrukh    13BCS-0044

#include <iostream>
using namespace std;
int count=0;
class Bank
{
public:
	void operator ++(int ){
		count++;
		cout<<"One person entered the bank.Total number of persons in the bank is: "<<count<<endl;

	}

	void operator --(int ){
		if (count == 0)
			cout<<"There is no one in the bank !"<<endl;

		else {
			count--;
			cout<<"One person left the bank.Total number of persons in the bank is: "<<count<<endl;
		}
	}


};

int main()
{
	Bank obj;
	obj++;
	obj++;
	obj++;
	obj++;
	obj++;
	obj--;
	obj--;
	obj--;
	obj--;
	obj--;
	obj--;
	obj--;
	obj--;
	return 0;
}