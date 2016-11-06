#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,m;
	map<pair<int,int>,int> conn;
	cin>>n>>m;
	for(int i=0; i<m; i++)
	{
		int a,b,l;

		cin>>a>>b>>l;
		if(conn[make_pair(a,b)])
		{
			if(a<b)
			{
				if(conn[make_pair(a,b)] > l)
					conn[make_pair(a,b)] = l;
			}
			else
			{
				if(conn[make_pair(b,a)] > l)
					conn[make_pair(b,a)] = l;
			}
		}
		else
		{
			if(a<b)
				conn[make_pair(a,b)] = l;
			else
				conn[make_pair(b,a)] = l;
		}

	}

	int q;
	cin>>q;
	vector<int> cables(q);
	for(int i=0; i<q; i++)
		cin>>cables[i];
	sort(cables.begin(), cables.end());

	for(int i=0; i < q; i++)
	{
    	int max = -1;
    	map<pair<int,int>,int>::iterator replace;
		for (std::map<pair<int,int>,int>::iterator it=conn.begin(); it!=conn.end(); ++it)
	    {
	    	if(it -> second > max)
	    	{
	    		max = it -> second;
	    		replace = it;
	    	}
	    }	
	    cout<<"max : "<<max<<"cables : "<<cables[i]<<endl;

	    if(max <= cables[i])
	    	break;
	    else
		    replace -> second = cables[i];
	}

	int answer = 0;
	for (std::map<pair<int,int>,int>::iterator it=conn.begin(); it!=conn.end(); ++it)
		answer += it -> second;

	cout<<answer<<endl;


	return 0;
}