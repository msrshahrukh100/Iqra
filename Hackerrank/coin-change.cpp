#include <iostream>
using namespace std;

int coinchange(int n, int k, int coins[])
{
	if( n == 0)
		return 1;
	
	if (n<0)
		return 0;

	if( k <=0 && n>=1)
		return 0;

	return coinchange(n-coins[k-1] , k , coins) + coinchange(n, k-1 , coins);

}


int count( int S[], int m, int n )
{
    if (n == 0)
        return 1;
     
    if (n < 0)
        return 0;
 
    if (m <=0 && n >= 1)
        return 0;
 
    return count( S, m - 1, n ) + count( S, m, n-S[m-1] );
}

int main()
{
	int n,k;
	cin>>n>>k;
	int coins[k];
	for (int i=0; i<k ; i++)
		cin>>coins[i];

	cout<<coinchange(n, k ,coins);

	
	return 0;
}