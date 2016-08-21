#include <iostream>
using namespace std;
long long sumsquaredigits(long long n)
{
	long long sum = 0;
	while(n)
	{
		int k = n%10;
		sum += k*k;
		n = n/10;
	}
	return sum;
}
int main()
{
	cout<<sumsquaredigits(102);
	
	return 0;
}