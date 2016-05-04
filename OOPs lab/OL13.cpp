// OOPS LAB ASSSIGNMENT 
// SUBMITTED BY
// Mohammad Shahrukh    13BCS-0044

#include <iostream>
using namespace std;

template <class T>
class Pair
{
	T a,b;
public:
	Pair(T x,T y)
	{
		a = x;
		b = y;
	}

	T get_max()
	{
		if (a>b)
			return a;
		return b;
	}

};

int main()
{

	Pair <int> obj1(5,6);
	Pair <float> obj2(5.5,8.9);
	cout<<"The maximum of two is : "<<obj1.get_max()<<endl;
	cout<<"The maximum of two is : "<<obj2.get_max()<<endl;

	
	return 0;
}