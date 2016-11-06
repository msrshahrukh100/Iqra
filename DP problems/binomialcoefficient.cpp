#include <iostream>
using namespace std;

int recur_sol(int n,int k)
{
	if(k == 0 || n == k)
		return 1;

	if(n < 0 || k < 0)
		return 0;

	return recur_sol(n-1,k-1) + recur_sol(n-1,k);

}

int dp_sol(int n,int k)
{
	int soln[n+1][k+1];

	for(int i=0; i<=n; i++)
	{
		for(int j = 0; j<=k; j++)
		{
			if(j == 0 || i == j)
				soln[i][j] = 1;

			else
				soln[i][j] = soln[i-1][j-1] + soln[i-1][j];

		}
	}

	return soln[n][k];
}

int main()
{
	int n,k;
	cout<<"Enter values of n and k : ";
	cin>>n>>k;

	cout<<recur_sol(n,k)<<endl;

	cout<<dp_sol(n,k)<<endl;

	
	return 0;
}