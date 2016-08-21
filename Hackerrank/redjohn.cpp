#include <iostream>
using namespace std;


// int seive()
// {
// 	int a[10007];
// 	for(int i=1; i<10000; i++)
// 		a[i] = i;

// 	for(int i=2; i<10000; i++)
// 	{
// 		if(a[i] != -1)
// 		{
// 			for(int j=2*a[i]; j<10000; j=j+a[i])
// 				a[j] = -1;
// 		}
// 	}

// 	int k=0;
// 	for(int i=2; i<10000; i++)
// 		if(a[i] != -1)
// 			primes[k++] = a[i];

// 	return 0;
// }




int configurations(int n)
{
	int ans[n+1] ;
	for(int i=0; i<=n; i++)
	{
		if(i == 0)
			ans[i] = 1;

		if(i >= 1 && i < 4)
			ans[i] = ans[i-1];

		else if(i >= 4)
			ans[i] = ans[i-1] + ans[i-4];

	}

	return ans[n];
	
}

int main()
{
	
	int primes[1000000];
	int a[1000007];
	
	for(int i=1; i<1000000; i++)
		a[i] = i;

	for(int i=2; i<1000000; i++)
	{
		if(a[i] != -1)
		{
			for(int j=2*a[i]; j<1000000; j=j+a[i])
				a[j] = -1;
		}
	}

	int k=0;
	for(int i=2; i<1000000; i++)
		if(a[i] != -1)
			primes[k++] = a[i];



	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int k = configurations(n),ans = 0;
		// cout<<k<<endl;
		// cout<<primes[0];
		for (int i=0 ; primes[i] <= k; i++)
			ans++;
		cout<<ans<<endl;
	}

	
	return 0;
}