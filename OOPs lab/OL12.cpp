// OOPS LAB ASSSIGNMENT 
// SUBMITTED BY
// Mohammad Shahrukh    13BCS-0044

#include <iostream>
using namespace std;

template<class T>
T minimum(T a1,T a2)
{
	if (a1 > a2)
		return a2;
	return a1;
}

int main()
{
	int ia=10,ib=15;
	float fa=11.52,fb=15.96;
	char ca='x',cb='n';

	cout<<"The minimum of ia and ib is : "<<minimum(ia,ib)<<endl;
	cout<<"The minimum of fa and fb is : "<<minimum(fa,fb)<<endl;
	cout<<"The minimum of ca and cb is : "<<minimum(ca,cb)<<endl;
	
	return 0;
}