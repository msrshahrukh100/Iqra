
// Dynamic Programming | Set 10 ( 0-1 Knapsack Problem)

#include <iostream>
using namespace std;

int knapsack(int val[], int wt[] , int w, int n)
{
	if (w <= 0 || n <= 0)
		return 0;

	if (wt[n-1]  > w)
		return knapsack(val,wt,w,n-1);

	return max(val[n-1] + knapsack(val,wt,w-wt[n-1],n-1) , knapsack(val,wt,w,n-1) );
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