// Dynamic Programming | Set 11 (Egg Dropping Puzzle)

#include <iostream>
#include <limits.h>
using namespace std;
int eggdrop(int n, int k)
{
	int ans[n+1][k+1];

	for(int i = 0; i<= n ; i++)
	{
		for(int j = 0 ; j<=k ; j++)
		{
			int maximum,answer = INT_MAX;

			if (j==0 || j==1 || i == 1)
				ans[i][j] = j;

			else
			{
				if (i >= 1 && j >= 1)
				for (int l=1; l<= j ;l++)
				{
					maximum = max(ans[i-1][l-1] , ans[i][j-l]);

					if (maximum < answer)
						answer = maximum;
				}
				ans[i][j] = 1+answer;
			}

		}
	}

	return ans[n][k];
}

int main()
{
	// function n eggs and k floors 
	// eggdrop (n , k) --> minimum no.of trials for n eggs and k floors
	// if at xth floor eggs break than n-1 eggs left and to check in rest x-1 floors
	// if it doesnt break than check in rest k-x floors
	
	int n,k;
	cin>>n>>k;
	cout << "The answer is  : "<<eggdrop(n,k)<<endl;

	return 0;
}