#include <iostream>
#include <limits.h>
using namespace std;

int recur_solve(int *a,int i,int j)
{
	int min = INT_MAX;
	if(i == j)
		return 0;

	for(int k = i; k<j; k++)
	{
		int temp = recur_solve(a,i,k) + recur_solve(a,k+1,j) + a[i-1]*a[k]*a[j];
		if(temp < min)
			min = temp;
	}

	return min;
}

int main()
{
	int a[] = {1, 2, 3, 4, 3};

	cout<<recur_solve(a,1,4);
	
	return 0;
}