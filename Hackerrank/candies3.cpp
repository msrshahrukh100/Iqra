#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {

	int n;
	cin>>n;
	int a[n+2],can[n+2]={0};
	for(int i=0; i<n; i++)
		cin>>a[i];

	for(int i=0; i<n-1; i++)
	{
		if(a[i+1] < a[i])
			can[i] = can[i+1] + 1;
		else
			can[i] += 1; 
	}

	for(int i=n-1; i>=1; i--)
	{
		if(a[i] > a[i-1])
			can[i] = can[i-1] + 1;
		else
			can[i] += 1;
	}
	int ans=0;
	for (int i = 0; i < n; ++i)
	{
		ans += can[i];
	}
	cout<<ans<<endl;


    return 0;
}
