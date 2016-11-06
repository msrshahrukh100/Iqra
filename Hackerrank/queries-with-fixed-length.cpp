#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <limits.h>
using namespace std;


int main() {

	int n,q;
	cin>>n>>q;
	vector<int> v;
	int temp;
	for(int i=0; i<n; i++)
	{
		cin>>temp;
		v.push_back(temp);
	}
	while(q--)
	{
		int que;
		cin>>que;
		int mi = INT_MAX;
		int ma = INT_MIN;

		for(int i=0; i<v.size(); i++)
		{

			for(int j=i; j<=i+que ; j++)
				ma = max(ma,j);
			mi = min(mi,ma);
		}
		cout<<mi<<endl;
	}

    return 0;
}
