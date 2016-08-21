#include <iostream>
using namespace std;
long a[100005],b[100005],n;
int main()
{
	int t;
	cin>>t>>n;
	while(t--)
	{
		for(int i=0 ; i<n ; i++)
			cin>>a[i]>>b[i];

		for(int i=0 ; i<n-1 ; i++)
		{
			int xchanges = 0;
			for(int j=0 ; j<n-i-1 ; j++)
			{
				if(a[j] > a[j+1])
				{
					int temp1 = a[j];
					a[j] = a[j+1];
					a[j+1] = temp1;

					int temp2 = b[j];
					b[j] = b[j+1];
					b[j+1] = temp2;

					xchanges++;
				}
			}
			if (xchanges == 0)
				break;
		}

		int count=1;
		int top=b[0];
		for(int i=0 ; i<n-1 ; i++)
		{
			if(b[i] < a[i+1])
				count++;
			else if((b[i] > a[i+1]) && (a[i+1] > top))
				count++;

			if (i > 1)
				top = min(b[i],b[i-1]);
		}
		cout<<count<<endl;
	}
	return 0;
}