#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;
int main()
{
	int q,t,y;
	cin>>q;
	string x;
	map<string, int> m;
	while(q--)
	{
		cin>>t;
		switch(t)
		{
			case 1:
				cin>>x>>y;
				if (m.find(x) != m.end())
					m[x] += y;
				else
					m.insert(make_pair(x,y));
				break;
			case 2:
				cin>>x;
				m.erase(x);
				break;
			case 3:
				cin>>x;
				cout<<m[x]<<endl;
		}
	}

    return 0;
}
