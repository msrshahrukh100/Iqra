#include <iostream>
#include <limits.h>
using namespace std;

int maxsubarray1(int a[] , int n)
{
	int sum = 0;
	for(int i=0 ; i<n ; i++)
	{
		if(a[i] > 0)
			sum += a[i];
	}  
	if (sum == 0)
	{
		sum = a[0];
		for(int i=1 ; i<n; i++)
			sum = max(sum,a[i]);
	}
	return sum;
}



int maxsubarray2(int a[], int size)
{
   int max_so_far = a[0];
   int curr_max = a[0];
 
   for (int i = 1; i < size; i++)
   {
        curr_max = max(a[i], curr_max+a[i]);
        max_so_far = max(max_so_far, curr_max);
   }
   return max_so_far;
}

// maxsubarray (a , n ) -->  gives the max sum of subsequesnces which are contiguous

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];

		cout<<maxsubarray2(a,n)<<" "<<maxsubarray1(a,n)<<endl;
	}
	
	return 0;
}