#include <iostream>
using namespace std;

int recur_solve(int *coins, int n,int m)
{

	if(n == 0)
		return 1;



	if(n > 0 && m <=0)
		return 0;

	if(n < 0)
		return 0;

	return recur_solve(coins,n-coins[m-1],m) + recur_solve(coins,n,m-1);
}

int dp_solve(int *coins,int n, int m)
{
	int answer[n+1][m+1];

	for(int i=0; i<=m; i++)
		answer[0][i] = 1;

	for(int i = 1; i<n; i++)
		answer[i][0] = 0;

	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=m; j++)
		{
			int x ,y;
			if(n - coins[j-1] >= 0)
				x = answer[i - coins[j-1]][j];
			else
				x = 0;

			y = answer[i][j-1];

			answer[i][j] = x + y;
		}
	}

	return answer[n][m];
}


int main(int argc, char const *argv[])
{
	int arr[] = {1, 2, 3};
    int n = 4;


    cout<<recur_solve(arr,n,3)<<endl;
    cout<<dp_solve(arr,n,3)<<endl;
	return 0;
}