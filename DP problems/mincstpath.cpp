#include <iostream>
#include <limits.h>
using namespace std;
int min(int a,int b,int c)
{
	return min(a,min(b,c));
}

int dp_solve(int cost[3][3],int m,int n)
{
	int answer[m+1][n+1];
	answer[0][0] = cost[0][0];

	for(int i=1; i<=m; i++)
		answer[i][0] = answer[i-1][0] + cost[i][0];

	for(int j=1; j<=n; j++)
		answer[0][j] = answer[0][j-1] + cost[0][j];

	for(int i=1; i<=m; i++)
	{
		for(int j=1; j<=n; j++)
		{
			answer[i][j] = cost[i][j] + min(answer[i-1][j],answer[i][j-1], answer[i-1][j-1]);
		}
	}

	return answer[m][n];

}
int recur_solve(int cost[3][3], int m,int n)
{
	if(m < 0 || n < 0)
		return INT_MAX;

	if(m == 0 && n == 0)
		return cost[m][n];

	return cost[m][n] + min(recur_solve(cost,m-1,n) , recur_solve(cost,m,n-1), recur_solve(cost,m-1,n-1));

}

int main(int argc, char const *argv[])
{
	
   int cost[3][3] = { {1, 2, 3},
                      {4, 8, 2},
                      {1, 5, 3} };

 cout<<recur_solve(cost,2,2)<<endl;
 cout<<dp_solve(cost,2,2)<<endl;
	return 0;
}