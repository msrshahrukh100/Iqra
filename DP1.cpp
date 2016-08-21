// length   | 1   2   3   4   5   6   7   8  
// --------------------------------------------
// price    | 3   5   8   9  10  17  17  20



#include <iostream>
int length[8] = {1,2,3,4,5,6,7,8};
int price[8] = {3,5,8,9,10,17,17,20};
int a[10];
int maxprice(int n)
{
	int max = 0;
	for (int i=0; i<n ; i++)
	{
		int k = maxprice(n-i-1) + a[i];
		if ( k > max)
			max = k;
	}
	return max;

}
using namespace std;
int main()
{

	for (int i=0; i<8; i++)
		a[length[i]] = price[i];


	int n;
	cin>>n;
	cout << "The answer is : "<<maxprice(n);

	// maxprice(n) = max(maxprice(n-i) + price(i)) for all i=0 to i=n-1  
	return 0;
}

