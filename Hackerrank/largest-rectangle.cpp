#include <iostream>
#include <limits.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int array[n+1];
	int breadth = 1;
	int max_area = INT_MIN;
	int min_height = INT_MAX;
	for(int i=0; i<n; i++)
		cin>>a[i];

	for(int i=n-1; i>=0; i--)
	{
		if(a[i])
		int area = breadth * a[i];

		if(area > max_area)
			max_area = area;

		breadth ++;
	}

	
	return 0;
}