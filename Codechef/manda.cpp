#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solve(int *h,int n,int p,int s)
{
	// if(n == 0)
	// 	return p;
	// else
	// 	return max(solve(h,n-1,p,s+1), solve(h,n-1,p+s*h[n-1],s));
// a[i][0] -> p
// a[i][1] -> s

	int a[n+1][2];

	for(int i=n; i<=n; i++)
	{

	}



}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		//S= 1 P = 0
		int n,p=0,s=1;
		cin>>n;
		int h[n+3];
		for(int i=0; i<n; i++)
			cin>>h[i];

		cout<<solve(h,n,p,s)<<endl;

	}


    return 0;
}
