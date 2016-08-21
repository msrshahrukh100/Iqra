#include <iostream>
using namespace std;
int main()
{
	int t;
	int ans[26];

	for(int i=0; i<26; i++)
			ans[i] = -1;

	int count = 0;
	cin>>t;
	for(int i=0; i<t; i++)
	{
		string a;
		cin>>a;
		for(int j=0; j<a.size(); j++)
		{
			if(i == 0)
				ans[a[j]-'a'] = i;
			else
			{
				if(ans[a[j] - 'a'] == i-1)
				{
					ans[a[j] - 'a'] = i;	
				}

			}
			
		}
		for(int i=0;i <26; i++)
			cout<<ans[i]<<" ";
	}
		for(int i=0; i<26; i++)
			if(ans[i] == t-1)
				count++;

	cout<<count<<endl;


	return 0;
}