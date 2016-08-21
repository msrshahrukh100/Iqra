#include <iostream>
#define max 1000007
using namespace std;
int main()
{
	int p[max],prime_nos[max],k=0;
	for(int i=0; i<max; i++)
		p[i] = i+2;


	for(int i=0; i<max; i++)
	{
		if(p[i] != -1)
		{
			for(int j=2*(p[i]-1);j<max; j+=p[i])
				p[j] = -1;
		}
			
	}

	for(int i=0; i<max; i++)
		if(p[i] != -1)
			prime_nos[k++] = p[i];


	int t,n;
	cin>>t;
	while(t--)
	{
		int c = 0;
		cin>>n;
		for(int i=0; i<k;i++)
		{
			while(n > 0)
			{
			if(prime_nos[i] <= n && n % prime_nos[i] == 0)
			{
				while(n % prime_nos[i] != 0)
				{
					n = n/prime_nos[i];
				}
				c++;
			}
			else if(n >= 1)
			{
				c++;
				n--;
			}

		}
		if (n == 0)
			break;
		}

		if (c%2 == 1 || n == 1)
			cout<<"Chef"<<endl;
		else
			cout<<"Misha"<<endl;
	}
	return 0;
}