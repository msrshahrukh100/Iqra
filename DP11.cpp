// Dynamic Programming | Set 11 (Egg Dropping Puzzle)

#include <iostream>
#include <limits.h>
using namespace std;
int eggdrop(int n, int k)
{
	int maximum,answer = INT_MAX;
	if (k==1 || k==0)
		return k;

	else if (n == 1)
		return k;

	else 
	{
		for(int i=1 ;i <= k; i++)
		{
			maximum = max(eggdrop(n-1,i-1) , eggdrop(n,k-i));

			if (maximum < answer)
				answer = maximum;
		}
	}
		return 1+answer;
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