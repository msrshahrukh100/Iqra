#include <iostream>
using namespace std;
int n;
int main()
{
	int t;
	int a[100005],b[100005];
	cin>>t>>n;
	while(t--)
	{
		long count = 1, i=0, j=0;
		for (long long i = 0; i<n ; i++)
			cin>>a[i]>>b[i];

		while (i<n && j < n)
		{
			if(a[j] > b[i])
			{
				count ++ ;
				i = j;
			}
			i++;
			j++;
		}
			
		cout<<count<<endl;
	}

	return 0;
}