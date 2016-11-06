#include <iostream>
using namespace std;

void swap(int &a,int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

int util_quicksort(int *a,int low,int high)
{
	int pivot = a[high];

	int wall = low;

	for(int i=low; i<=high; i++)
	{
		if(a[i] < pivot)
		{
			swap(a[i],a[wall]);
			wall ++;
		}
	}
	swap(a[wall],a[high]);

	return wall;
}

void quicksort(int *a,int low,int high)
{
	if(low < high)
	{	
		int partition = util_quicksort(a,low,high);
		quicksort(a,low,partition-1);
		quicksort(a,partition+1,high);
	}
}


int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++)
		cin>>a[i];

	quicksort(a,0,n-1);


	for(int i=0; i<n; i++)
		cout<<a[i]<<endl;
	return 0;
}