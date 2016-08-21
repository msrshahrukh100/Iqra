

///////////////////////wrong solutionnnnnnnnnnnn
#include <iostream>
#include <limits.h>
using namespace std;
int main()
{
	int arr[] = {2, 101, 4, 5, 100, 4, 5};
	int total_sum = INT_MIN;


	for(int i=1; i<7; i++)
	{
		int sum = 0;
		int current = arr[i];
		for(int j=i; j>=0; j--)
		{
			if(arr[j] <= arr[i] && current <= arr[j])
			{
				current = arr[j];
				sum += arr[j]; 
			}
			cout<<sum<<endl;		
		}

		if (sum > total_sum)
			total_sum = sum; 
	}

	cout<<total_sum;



	return 0;
}