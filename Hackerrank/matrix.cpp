#include <iostream>
using namespace std;
int m,n,r;
int main()
{
	cin>>m>>n>>r;
	int a[m+3][n+3];
	for(int i=0; i<m; i++)
		for(int j=0; j<n; j++)
			cin>>a[i][j];
	
	int temp[m+n],temp2[m+n];

	for(int loop=0; loop<r; loop++)
	{
		for(int i=0; i<(m/2); i++)
		{
			temp[i] = a[i][i];
			for(int j=i; j<n-i; j++)
				a[i][j] = a[i][j+1]; 
		}

		for(int j = 0; j<(n/2); j++)
		{
			temp2[j] = a[m-1-j][j];
			for(int k=m-1-j; k>=1+j; k--)
				a[k][j] = a[k-1][j];
		}
		for(int i=0; i<(m/2); i++)
			a[i+1][i] = temp[i];

		// for(int i=m-1; i>(m/2); i--)
		// {
		// 	for(int j=n-i-1; j>=i+1; j--)
		// 		a[i][j] = a[i][j-1];


		// }


	}

	for(int i=0; i<m; i++)
	{

		for(int j=0; j<m; j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}