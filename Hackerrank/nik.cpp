#include <cmath>
#include <numeric>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solve(vector<int> v,int start,int end)
{
	int sum = accumulate(v.begin(),v.end(),0);
	if (sum % 2 != 0)
		return 0;
	sum = sum/2;
	int i;
	if (start < 0 || end > v.size())
		return 0;

	for(i=start; i<end; i++)
	{
		sum = sum - v[i];
		if (sum == 0)
			break;
	}
	if (i == end)
		return 0;

	else 
	{
		// vector<int> v1;
		// vector<int> v2;
		// for(int j=0; j<=i; j++)
		// 	v1.push_back(v[j]);
		// for(int j=i+1; j<l; j++)
		// 	v2.push_back(v[j]);

		return 1 + max(solve(v,0,i+1),solve(v,i+1,end));
	}
}


int main()
{

	int t;
	cin>>t;
	while(t--)
	{
		vector<int> v;
		long long n;
		int a;
		cin>>n;
		for(long long i=0; i<n; i++)
		{
			cin>>a;
			v.push_back(a);
		}
		int l = v.size();
		cout<<solve(v,0,l)<<endl;

	} 
    return 0;
}