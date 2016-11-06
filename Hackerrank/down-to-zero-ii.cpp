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
	int q;

	/////////////////Find primes
	int a[1000010];
	primes.push_back(1);
	for(int i=2; i<1000008; i++)
		a[i] = i;
	for(int i=2; i<1000008; i++)
		for(int j=2*i; j<1000008; j = j + i)
			a[j] = -1;
	for(int i=2; i<100; i++)
		if(a[i] != -1)
			primes.push_back(a[i]);
	/////////////////Find primes
	cin>>q;
	while(q--)
	{
		int n;
		cin>>n;
				cout<<"reaching here!";
		int answer = 0;
		while(n != 0)
		{
			answer ++;
			// cout<<n<<" --> ";
			if(is_prime(n))
				n--;

			else
			{
				int temp = int(sqrt(n));
				int a;
				int m = INT_MAX;
				// cout<<temp<<endl;
				for(a=2; a<=temp+1; a++)
					if(n%a == 0)
					{
						m = min(m,max(a,n/a));
						cout<<a<<endl;
						cout<<m<<endl;
					}

				// cout<<" a : "<<a<<" b : "<<b<<endl;
				n = m;
			}

		}
		cout<<answer;
	}
	
	return 0;
}