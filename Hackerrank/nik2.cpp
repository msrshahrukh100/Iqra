#include <cmath>
#include <numeric>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solve(vector<int> v)
{
	int sum = accumulate(v.begin(),v.end(),0);
	if (sum % 2 != 0)
		return 0;
	sum = sum/2;
	int l = v.size();
	for(int i=0; i<l; i++)
	{
		for(int j=i+1; j<l; j++)
			
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
		cout<<solve(v)<<endl;

	} 
    return 0;
}