#include <iostream>
using namespace std;
void swap(int &a,int &b)
{
	cout<<a<<"  "<<b<<endl;
	int t=a;
	a=b;
	b=t;
}

int main()
{
	int a=5,b=7;
	cout<<a<<"  "<<b<<endl;
	swap(a,b);
	cout<<a<<"  "<<b<<endl;
	
	return 0;
}