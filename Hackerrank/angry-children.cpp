#include <iostream>
#include <stdlib.h>
#include <limits.h>
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

	// for(int i=0; i<n; i++)
	// 	cout<<a[i]<<endl;
	int min = INT_MAX;
	for(int i=0; i<n-k+1; i++)
		if((a[i+k-1] - a[i])<min)
			min = a[i+k-1] - a[i] ;

	cout<<min<<endl;


	return 0;
}