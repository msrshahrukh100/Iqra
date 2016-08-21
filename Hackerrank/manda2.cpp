#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
using namespace std;
int main()
{

	int t;
	cin>>t;

	while(t--)
	{
		int n,a;
		cin>>n;
		vector<int> v;
		for(int i=0; i<n; i++)
		{
			cin>>a;
			v.push_back(a);
		}
		sort(v.begin(),v.end());
		
		int ans = 0;

		int sum = 0;
		for(int i=0; i<n; i++)
		{
			sum += v[i];
			ans = max(ans,sum*(n-i));
		}
		cout<<ans<<endl;





	}
	
	return 0;
}