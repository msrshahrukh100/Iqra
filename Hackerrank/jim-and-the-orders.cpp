#include <iostream>
#include <utility>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n+1],d[n+1];
	for(int i=1;i<=n;i++)
		cin>>a[i]>>d[i];

	for(int i=1; i<=n; i++)
		a[i] += d[i];

	int done=0;

	while(done != n)
	{
		int min = 9999999,mi;
		for(int i=1; i<=n; i++)
		{	
			if(a[i] == -1)
				continue;

			if(a[i] < min)
			{
				mi = i;
				min = a[i];
			}
		}
		a[mi] = -1;
		cout<<mi<<" ";
		done++; 

	}

	return 0;
}