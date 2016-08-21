#include <iostream>
using namespace std;

void sum(int &a,int &b, int &c)
{
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
	return;
}

int main(int argc, char const *argv[])
{
	int a=1,b=2,c=3;
	int *d = &a;
	cout<<d<<endl;
	sum(a,b,c);
	return 0;
}