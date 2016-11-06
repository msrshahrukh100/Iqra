#include <iostream>
#include <limits.h>
using namespace std;
int min(int a,int b,int c)
{
	return min(a,min(b,c));
}
int recur_solve(int cost[3][3],int n,int m)
{

	if(n<0 || m<0)
		return INT_MAX;

	if(n == 0 && m == 0)
		return cost[n][m];

	return cost[n][m] + min(recur_solve(cost,n-1,m),recur_solve(cost,n-1,m-1),recur_solve(cost,n,m-1));
}

int dp_solve(int cost[3][3])
{
	int answer[][];
	for(int i=0; i<=3; i++)
	{
		for(int j=0; j<=3; j++)
		{
			answer[i][j] = cost[i][j] + min(answer[i-1][j],answer[i-1][j-1],answer[i][j-1]);
		}
	}
}
int main()
{

	int cost[3][3] = { {1, 2, 3},
                      {4, 8, 2},
                      {1, 5, 3} };

    cout<<recur_solve(cost,2,2);
    cout<<dp_solve(cost);
		
	return 0;
}