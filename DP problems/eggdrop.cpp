#include <iostream>
#include <limits.h>
using namespace std;

int recur_solve(int n,int k)
{
	int min = INT_MAX;


	for(int i=1; i<=k; i++)
	{
		int temp = max(recur_solve(n-1,i-1),recur_solve(n,k-i));
		if(temp < min)
			min = temp;
	}

	return min;
}

int main()
{
	int n = 2, k = 10;

	cout<<recur_solve(n,k);
	
	return 0;
}