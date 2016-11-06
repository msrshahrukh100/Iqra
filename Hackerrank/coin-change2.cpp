#include <iostream>
using namespace std;

int recur_solve(int *c, int n, int m)
{
	if(n == 0)
		return 1;

	if(n < 0)
		return 0;

	if(m <= 0 && n != 0)
		return 0;

	return recur_solve(c,n-c[m-1],m) + recur_solve(c,n,m-1);

}

long long dp_solve(long long *c, long long n, long long m)
{
	long long answer[n+1][m+1];

	for(long long i=0; i<=n; i++)
	{
		for(long long j=0; j<=m; j++)
		{
			if(i == 0)
				answer[i][j] = 1;
			else if(j == 0 && i != 0)
				answer[i][j] = 0;
			else
			{
				long long x,y;
				if(i-c[j-1] >= 0)
					x = answer[i-c[j-1]][j];
				else
					x = 0;

				if(j-1 <= 0)
					y = 0;
				else
					y = answer[i][j-1];

				answer[i][j] = x+y;
			}
		}
	}
	return answer[n][m];
}

int main()
{
	long long n,m;
	cin>>n>>m;

	long long c[m+1];

	for(long long i=0; i<m; i++)
		cin>>c[i];

	// cout<<recur_solve(c,n,m);

	cout<<dp_solve(c,n,m);
	
	return 0;
}