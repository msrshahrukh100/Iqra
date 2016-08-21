#include <iostream>
using namespace std;
int main()
{
	
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0; i<n; i++)
		cin>>a[i];

	int count = 0;

	for(int i=0; i<n-1; i++)
	{
		int current_max = i;

		for(int j=i+1; j<n; j++)
			if(a[j] > a[current_max])
				current_max = j;

		if(current_max != i)
		{

			int temp = a[i];
			a[i] = a[current_max];
			a[current_max] = temp;

			count ++;
		}
		if(count == k)
			break;
	}

	for(int i=0; i<n; i++)
		cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}