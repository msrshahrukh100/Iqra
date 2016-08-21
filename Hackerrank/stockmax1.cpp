#include <iostream>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n;cin>>n;int a[n+1];
		for(int i=0; i<n; i++)
			cin>>a[i];

		int current = a[0];
		int nshare = 0;
		int profit = 0; 
		int property = 0;

		for(int i=0; i<n; i++)
		{
			if (i == n-1 && a[i] > a[i-1])
			{
				// cout<<"last"<<endl;
				profit += nshare * a[i] - property;
			}

			else if(a[i] >= current && a[i+1] > a[i])  // buy
			{
				current = a[i];
				nshare++;
				property += a[i]; 
				// cout<<"buy"<<endl;
			}

			else if(a[i] >= current && a[i+1] < a[i]) // sell
			{
				current = a[i+1];
				profit += nshare * a[i] - property;
				nshare = 0;
				property = 0;
				// cout<<"sell"<<endl;
			}
			// cout<<profit<<endl;
		// cout<<profit<<" ; "<<nshare<<" ; "<<property<<endl;
		}
		cout<<profit<<endl;
	}
	
	return 0;
}