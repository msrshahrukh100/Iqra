#include <iostream>
using namespace std;
int main()
{
	int n,k;

	cin>>n>>k;
	int a[n+1];
	int setsize = 0;
	int taken[n]={0};

	for(int i=0; i<n; i++)
		cin>>a[i];

	for(int i=0; i<n-1; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if((a[i] + a[j])%k == 0)
			{
				taken[i]++;
				taken[j]++;
			}

		}
	}
	int temp = n;
	for(int i=0; i<n; i++)
		if(taken[i] == n-1)
			setsize++;

	cout<<n<<endl;
	
	return 0;
}