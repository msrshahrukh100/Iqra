#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int n,a;
	vector<int> v;
	cin>>n;
	for(int i=0; i<n; i++)
	{
		cin>>a;
		v.push_back(a);
	}

	sort(v.begin(),v.end());

	int cost=1,cweight = v[0];
	for(int i=0; i<n; i++)
	{
		if(v[i] > cweight + 4)
		{
			cost++;
			cweight = v[i];
		}
	}

	cout<<cost<<endl;


    return 0;
}
