#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
	int n,k;
	cin>>n;
	cin>>k;
	int a[n+1];
	int answer[n+1];
	int count,l=0;

	for (int i = 0; i < n; i++)
		cin>>a[i];

	for(int i=0; i<n; i++)
	{
		count = 0;
		for(int j=i+1; j<n; j++)
		{
			if(a[j]>a[i])
				count ++; 
		}
		answer[l++] = count;
	}	
	int c = 0;
	sort(answer,answer+n);
	
	for(int i=0; i<n; i++)
	{
		cout<<answer[i]<<endl;
		// for(int j=i+1; j<n; j++)
		// 	if(answer[i] + answer[j] >= k)
		// 		c++;

	}
	cout<<c<<endl;

	return 0;
}