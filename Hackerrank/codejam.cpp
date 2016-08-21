#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int t,k=1;
	cin>>t;
	while(t--)
	{
		int n,c;
		cin>>c>>n;
		int a[n];
		for(int i=0; i<n; i++)
			cin>>a[i];
		int i,j,f=0;

		for(i=0; i<n; i++)
		{
			for(j=i+1; j<n; j++)
			{
				if(a[j] == c-a[i])
				{
					f = 1;
					break;
				}
			}
			if(f==1)
				break;
		} 

		printf("Case #%d: %d %d\n",k,i+1,j+1);
		k++;

	}
	
	return 0;
}