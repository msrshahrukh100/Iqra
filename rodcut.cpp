#include <iostream>
#include <limits.h>
using namespace std;
int maxcost(int a[], int k)
{
	if (k <= 0)
		return 0;

	int m = INT_MIN;
	for(int i=0; i<k ; i++)
		m = max(m , a[i] + maxcost(a,k-i-1)) ;

	return m;
}

int cutRod(int price[], int n)
{
   if (n <= 0)
     return 0;
   int max_val = INT_MIN;
 

   for (int i = 0; i<n; i++)
         max_val = max(max_val, price[i] + cutRod(price, n-i-1));
 
   return max_val;
}
 

int main()
{
	int n;
	cin>>n;
	int a[n+1];
	for(int i=0;i<n; i++)
	cin>>a[i];

	cout<<maxcost(a,n);
	
	return 0;
}