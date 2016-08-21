#include <iostream>
using namespace std;

int findcatalan(int n)
{
	int ans = 0;
	if(n <= 0)
		return 1;

	for(int i=0; i<n; i++)
		ans += findcatalan(i) * findcatalan(n-i-1);

	return ans;
}

int findcatalandp(int n)
{
	int answer[n+1] = {0};
	answer[0] = 1;

	for(int i=1; i<=n; i++)
	{
		for(int j=0; j<i; j++)
			answer[i] += answer[j] * answer[i-j-1];
	}
	return answer[n];
}

unsigned long int findcoefficient(int n, int k)
{
	unsigned long int res = 1;

	if (k > n - k)
		k = n - k;

	for(int i=0; i<k; i++)
	{
		res *= (n-i);
		res /= (i+1);

	}
	return res;
}

unsigned long int findcatalanbinomial(unsigned int n)
{
	unsigned long int c = findcoefficient(2*n,n);
	return c/(n+1);
}

int main()
{
	int n;
	cin>>n;
	//C(n+1) = for i =0 to n (sumof(C(i) * C(n-i))
	// also C(n) = (1/(n+1)) * (C(2n,n))

	// for(int i=0; i<n; i++) 
	// 	cout<<findcatalan(i)<<" ";

	// for(int i=0; i<n; i++) 
	// 	cout<<findcatalandp(i)<<" ";



	for(int i=0; i<n; i++) 
		cout<<findcatalanbinomial(i)<<" ";





	cout<<endl;
	return 0;
}