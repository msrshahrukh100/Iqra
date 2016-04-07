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
	memo[0] = 0;
	memo[1] = 1;
	for(int i=2;i<=n;i++)
		memo[i] = memo[i-1] + memo[i-2];
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