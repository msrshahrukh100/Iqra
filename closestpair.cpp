#include <iostream>
using namespace std;

void solve(int *a,int *b,int n,int m,int x)
{
	int i=n-1,j=m-1;
	int res 
	while(i >= 0 && j>= 0)
	{
		if((a[i] + b[j] - x) < res)
	}
}

int main()
{
	int n,m;
	cin>>n>>m;
	int a[n],b[m];
	int x;
	cin>>x;

	for(int i=0; i<n; i++)
		cin>>a[i];
	for(int i=0; i<m; i++)
		cin>>b[i];

	solve(a,b,n,m,x);
	
	return 0;
}