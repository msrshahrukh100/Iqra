#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <limits.h>
using namespace std;
vector <int> primes;
bool is_prime(int n)
{
	return binary_search(primes.begin(),primes.end(),n);
}
int main()
{
	//for the prime numbers
	int a[1000015];
	primes.push_back(1);
	for(int i=2; i<1000008; i++)
		a[i] = i;
	for(int i=2; i<1000008; i++)
	{	
		if(a[i] != -1)
		{
			for(int j=2*i; j<1000008; j = j + i)
				a[j] = -1;			
		}
	}
	for(int i=2; i<1000008; i++)
		if(a[i] != -1)
			primes.push_back(a[i]);
	//for the prime numbers
	int q;
	// for(int i=0; i<500; i++)
	// 	cout<<primes[i]<<endl;
	// cout<<is_prime(419);	
	cin>>q;
	while(q--)
	{
		int n;
		cin>>n;
		int answer = 0;
		while(n != 0)
		{
			answer++;
			if(is_prime(n))
				n--;
			else
			{
				int temp = int(sqrt(n));
				int m = INT_MAX;
				for(int i=2; i<=temp+1; i++)
					if(n%i == 0)
					{
						m = min(m,max(i,n/i));
					}
				// cout<<m;
				n=m;
			}
		}
		cout<<answer<<endl;
	}
	return 0;
}