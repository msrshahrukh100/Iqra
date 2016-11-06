#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	map <string,int> magazine;
	map <string,int> note;
	string temp;
	int m,n;
	cin>>m>>n;

	for(int i=0; i<m; i++)
	{
		cin>>temp;
		magazine[temp] ++;
	}

	for(int i=0; i<n; i++)
	{
		cin>>temp;
		note[temp] ++;
	}

	map<string,int> :: iterator i;
	int success = 1;
	for(i = note.begin(); i != note.end(); i++)
	{
		// cout<<i->second<<" "<<magazine[i->first]<<endl;
		if(i->second > magazine[i->first])
		{
			success = 0;
			break;
		}
	}

	if(success)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;


	return 0;
}