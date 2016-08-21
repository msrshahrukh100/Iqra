#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;


int main() {

	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> v(n);
		for(int i=0; i<n; i++)
			cin>>v[i];

		vector<int> :: iterator i;
		int flag = 0;
		for(i = v.begin(); i != v.end(); i++)
		{
			int left,right;
			if(i == v.begin())
			{
				left = 0;
				right = accumulate(i+1,v.end(),0);
			}
			else if(i == v.end())
			{
				right = 0;
				left = accumulate(v.begin(),i-2,0);
			}
			else
			{
				left = accumulate(v.begin(),i,0);
				right = accumulate(i+1,v.end(),0);
			}

			if(left == right)
			{
				flag = 1;
				break;
			}
		}

		if(flag == 1)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;

	}
    return 0;
}
