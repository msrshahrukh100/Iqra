#include <iostream>
using namespace std;
int arr[] = {1, 5, 8, 9, 10, 17, 17, 20};
int l[] = {1,2,3,4,5,6,7,8};

int cutrod(int n, int length)
{
	if(n <= 0 || length <= 0)
		return 0;

	// cout<<arr[n-1] + cutrod(n-1,length-l[n-1])<<" ; "<<cutrod(n-1,length)<<" || ";
	return max(arr[n-1] + cutrod(n-1,length-l[n-1]-1), cutrod(n-1,length));

}

int main()
{
	cout << cutrod(8,8);

	
	return 0;
}