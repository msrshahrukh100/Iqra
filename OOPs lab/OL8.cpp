// OOPS LAB ASSSIGNMENT 
// SUBMITTED BY
// Mohammad Shahrukh    13BCS-0044

#include <iostream>
using namespace std;

class Company
{
	int turnover;
public:
	Company (){
		turnover = 0;
	}

	Company (int a){
		turnover = a;
	}

	Company operator +(Company a){
		Company temp;
		temp.turnover = this->turnover + a.turnover;
		return temp;
	}

	Company operator -(Company a){
		Company temp;
		temp.turnover = this->turnover - a.turnover;
		return temp;
	}
	int show()
	{
		return turnover;
	}
};
int main()
{
	Company c1(1000),c2(500),temp;

	temp = c1 + c2;
	cout<<"The sum of the turnovers is : "<<temp.show()<<endl;

	temp = c1 - c2;
	cout<<"The difference of the turnovers is : "<<temp.show()<<endl;

	
	return 0;
}