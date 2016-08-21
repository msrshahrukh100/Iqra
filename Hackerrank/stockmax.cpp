#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;cin>>n;
		int a[n+1];

		for(int i=0; i<n; i++)
			cin>>a[i];
		int profit = 0;
		for (int i=0; i<n; i++)
		{
			int nextmax = a[i];
			for(int j=i+1; j<n; j++)
			{
				if(nextmax < a[j])
				{
					nextmax = a[j];
					profit += a[j-1];

				}
				else
				{
					profit = a[j-1] * j - profit;
				}
			}

		}
			cout<<profit<<endl;
	}
	
	return 0;
}