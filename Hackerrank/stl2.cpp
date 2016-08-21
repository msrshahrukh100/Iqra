#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
int main()
{
	int q;
	cin>>q;
	set <int> s;
	while(q--)
	{
		int a,b;
		cin>>a>>b;
		switch(a)
		{
			case 1:
				s.insert(b);
				break;
			case 2:
				s.erase(b);
				break;
			case 3:
				if(s.find(b) != s.end())
					cout<<"Yes"<<endl;
				else
					cout<<"No"<<endl;
		}
	}

    return 0;
}
