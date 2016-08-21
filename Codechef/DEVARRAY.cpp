#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n,q;
	cin>>n>>q;
	int a[n];
	for (int i=0 ; i<n ; i++)
		cin>>a[i];

	int max = a[0], min = a[0];
	for(int i=0 ; i<n ; i++)
	{
		if(a[i] > max)
		{
			max = a[i];
			continue;
		}
		if(a[i] < min)
			min = a[i];
	}
	int query;
	while(q--)
	{
		cin>>query;
		if (query <= max && query >= min )
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
	
	return 0;
}