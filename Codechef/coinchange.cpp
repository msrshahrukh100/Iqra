#include <iostream>
using namespace std;

int coinchange(int *a, int m, int n)
{
	// if(m == 0)
	// 	return 1;

	// if(n == 0)
	// 	return 1;

	// return 1 + max(coinchange(a,m-1,n-a[m-1]), coinchange(a,m-1,n));

	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(i == 0 || j == 0)
				
		}
	}

}

int main()
{
	int n,m;
	cin>>n>>m;
	int a[m+2];

	for(int i=0; i<m; i++)
		cin>>a[i];

	cout<<coinchange(a,m,n)<<endl;
	
	return 0;
}