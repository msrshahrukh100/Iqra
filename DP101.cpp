
// Dynamic Programming | Set 10 ( 0-1 Knapsack Problem)

#include <iostream>
using namespace std;

int knapsack(int val[], int wt[] , int w, int n)
{
	int solution[n+2][w+2];

	for(int i = 0; i<=n ; i++)
	{
		for(int j=0 ; j<=w; j++)
		{
			if (i == 0 || j == 0)
				solution[i][j] = 0;

			else if (wt[i-1] <= j)
				solution[i][j] = max((val[i-1] + solution[i-1][j-wt[i-1]]) , (solution[i-1][j]) )	;

			else 
				solution[i][j] = solution[i-1][j];				



		}
	}

	return solution[n][w];


	// /////////////////////////

	// if (w <= 0 || n <= 0)
	// 	return 0;

	// if (wt[n-1]  > w)
	// 	return knapsack(val,wt,w,n-1);

	// return max(val[n-1] + knapsack(val,wt,w-wt[n-1],n-1) , knapsack(val,wt,w,n-1) );
}

int main()
{
	int w;
    int val[3] = {60, 100, 120};
    int wt[3] = {10, 20, 30};
    cout<<"Enter the max weight allowed : ";
    cin>>w;
    cout<<"The answer is : "<<knapsack(val,wt,w,3)<<endl;
	
	return 0;
}