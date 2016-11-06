#include <iostream>
using namespace std;

int recur_solve(int *wt,int *val,int W,int n)
{
	if(n <= 0 || W <= 0)
		return 0;

	if(wt[n-1] > W)
		return recur_solve(wt,val,W,n-1);

	return max(val[n-1] + recur_solve(wt,val,W-wt[n-1],n-1) , recur_solve(wt,val,W,n-1));
}

int dp_solve(int *wt,int *val,int W,int n)
{
	int answer[W+1][n+1];

	for(int i=0; i<=W; i++)
	{
		for(int j=0; j<= n; j++)
		{
			if(i == 0 || j == 0)
				answer[i][j] = 0;

			else if(i >= wt[j-1])
			{
				answer[i][j] = max(val[j-1] + answer[i-wt[j-1]][j-1] , answer[i][j-1]);
			}

		}
	}

	return answer[W][n];
}

int main()
{
	int val[] = {60, 100, 120};
    int wt[] = {10, 20, 30};
    int  W = 50;

    int n = 3;
    cout<<recur_solve(wt,val,W,n)<<endl;

    cout<<dp_solve(wt,val,W,n)<<endl;
	
	return 0;
}