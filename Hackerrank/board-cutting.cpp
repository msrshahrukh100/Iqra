#include <iostream>
#include <utility>
using namespace std;
int main()
{
	long long t;
	cin>>t;
	while(t--)
	{
		long long pieces_x = 1;
		long long pieces_y = 1;


		long long m,n;
		cin>>m>>n;
		long long a[m+n][2];
		for(long long i=0; i<m-1; i++)
		{
			a[i][0] = 0;
			cin>>a[i][1];
		}

		for(long long i=m-1; i<m+n-2; i++)
		{
			a[i][0] = 1;
			cin>>a[i][1];
		}

		// for(long long i=0; i<m+n-3; i++)
		// {
		// 	int xchanges=0;
		// 	for(long long j=0; j<m+n-3-i; j++)
		// 	{
		// 		if(a[j][1] < a[j+1][1])
		// 		{
		// 			xchanges++;
		// 			swap(a[j],a[j+1]);
		// 		}
		// 	}
		// 	if(xchanges == 0)
		// 		break;
		// }

		for(long long i=0; i<m+n-2; i++)
		{
			int min=i;
			for(long long j=i+1; j<m+n-2; j++)
			{
				if(a[j][1] > a[min][1])
				{
					min = j;
				}
			}
			// cout<<min<<endl;
					swap(a[i],a[min]);
		}



		// for(long long i=0; i<m+n-2; i++)
		// 	cout<<a[i][0]<<"-->"<<a[i][1]<<endl;

		long long sum = 0;

		for(long long i=0; i<m+n-2; i++)
		{
			if(a[i][0] == 0)
			{
				sum += pieces_x * a[i][1];
				pieces_y++;
			}

			else
			{
				sum += pieces_y * a[i][1];
				pieces_x++;
			}
			sum = sum % 1000000007;
		}

		cout<<sum<<endl;

	}
	
	return 0;
}