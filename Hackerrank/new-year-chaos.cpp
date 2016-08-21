#include <iostream>
// #include <utility>
using namespace std;

void solve(int a[],int n)
{
	for(int i=0; i<n; i++)
		if(a[i] > i+3)
		{
			cout<<"Too chaotic"<<endl;
			return;
		}

	int xchanges = 0;
	for(int i=0; i<n-1; i++)
	{
		int swaps = 0;
		for(int j=0; j<n-i-1; j++)
			if(a[j] > a[j+1])
			{
				swaps++;
				xchanges++;
				swap(a[j],a[j+1]);
			}
		if(swaps == 0)
			break;
	}

	cout<<xchanges<<endl;

}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int actual[n];
		for(int i=0; i<n; i++)
			cin>>actual[i];
		solve(actual,n);
	}
	
	return 0;
}