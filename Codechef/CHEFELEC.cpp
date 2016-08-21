#include <iostream>
using namespace std;
int mod(int a)
{
	if(a>=0)
		return a;
	return -1 * a;
}


int solve(int light[],long long coo[],int n)
{
	if(n<=1)
		return 0;

	if(n == 2)
		return mod(coo[n-1] - coo[n-2]);

	if(light[n-1] == 1)
		return min(solve(light,coo,n-1)+mod(coo[n-1] - coo[n-2]) , solve(light,coo,n-1));
	else
		return solve(light,coo,n-1) + mod(coo[n-1] - coo[n-2]);
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string a;
		cin>>a;
		int light[n];
		for(int i=0; i<n; i++)
			light[i] = a[i]-48;

		long long coo[n];
		for(int i=0; i<n; i++)
			cin>>coo[i];


		cout<<solve(light,coo,n)<<endl;
	}
	
	return 0;
}