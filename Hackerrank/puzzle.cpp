#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		char a[n+1][n+1];


		for(int i=0; i<n; i++)
			for(int j=0; j<n; j++)
				cin>>a[i][j];

		// check inversions


			for(int i=0; i<n; i++)
				sort(a[i],a[i]+n);
			int flag = 1;
			for(int i=0; i<n; i++)
			{
				for(int j=0; j<n-1; j++)
					if(a[j][i] > a[j+1][i])
					{
						flag = 0;
						break;
					}  
			}
			if(flag)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
	}
	
	return 0;
}