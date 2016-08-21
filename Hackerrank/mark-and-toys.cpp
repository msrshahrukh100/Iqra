#include <iostream>
#include <stdlib.h>
using namespace std;
int cmpfunc(const void *a, const void *b)
{
	return (*(int *)a - *(int *)b);
}
int main()
{

	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0; i<n; i++)
		cin>>a[i];

	qsort(a,n,sizeof(int),cmpfunc);

	int count = 0;

	for(int i=0; i<n; i++)
	{
		if(a[i] <= k)
		{
			count++;
			k -= a[i];
		}
		else 
			break;
	}
	cout<<count;


	
	return 0;
}