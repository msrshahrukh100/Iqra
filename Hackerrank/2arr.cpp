#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {

	int t;
	cin>>t;
	while(t--)
	{
		vector<int> v1,v2;
		int n,k,a;
		cin>>n>>k;
		for(int i=0; i<n; i++)
		{
			cin>>a;
			v1.push_back(a);
		}
		sort(v1.begin(),v1.end());
		for(int i=0; i<n; i++)
		{
			cin>>a;
			v2.push_back(a);
		}
		sort(v2.begin(),v2.end());
		int flag = 1;
		for(int i=n-1; i>=0; i--)
		{
			int f = k - v2[i];

			if(f < 0)
			{
				v1[(n-1)-i] = -1;
				continue;
			}

			for(int j=0; j<n; j++)
			{
				if(v1[j] == -1)
					continue;

				if(v1[j] >= f)
				{
					v1[j] = -1;
					break;
				}
				else
				{
					flag = 0;
					break;
				}
			}
			if(flag == 0)
				break;
		}

		if(flag)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;



	}

    return 0;
}