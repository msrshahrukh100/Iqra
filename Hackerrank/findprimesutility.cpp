#include <iostream>
using namespace std;
int main()
{
	int a[1000010];
	int primes[1000000],k=0;
	for(int i=2; i<1000008; i++)
		a[i] = i;
	for(int i=2; i<1000008; i++)
		for(int j=2*i; j<1000008; j = j + i)
			a[j] = -1;
	for(int i=2; i<100; i++)
		if(a[i] != -1)
			primes[k++] = a[i];
	cout<<primes[0];
	return 0;
}