#include <iostream>
#define nil -1
#define max 100
using namespace std;
int memo[max];
void initialize()
{
	for(int i=0;i<max;i++)
		memo[i] = nil;
}

int fibonacci(int n)
{
	if(memo[n] == nil)
	{
	if (n<=1)
		memo[n] = n;
	else
		memo[n] = fibonacci(n-1) + fibonacci(n-2);
	}

	return memo[n];
}

int main()
{
	int n;
	initialize();
	cout<<"Enter fibonacci number you want: ";
	cin>>n;
	cout<<"The "<<n<<"th fibonacci number is "<<fibonacci(n)<<endl;;
	return 0;
	
}