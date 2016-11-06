#include <iostream>
using namespace std;
void swap(int *a,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
int create_partition(int *a,int low,int high)
{
	int pivot = a[high];
	int i = low;

	for(int j=low; j<=high; j++)
	{
		if(a[j] < pivot)
		{
			swap(&a[j],&a[i]);
			i++;
		}
	}

	swap(&a[i],&a[high]);
	return i;
}

void quicksort(int *a,int low,int high)
{
	if(low < high)
	{
		int partition = create_partition(a,low,high);
		quicksort(a,low,partition-1);
		quicksort(a,partition+1,high);
	}
}

int main()		
{
	int a[10] = {5,1,2,3,7,10,55,23,6,11};

	quicksort(a,0,9);
	for(int i=0; i<10; i++)
		cout<<a[i]<<" ";
	cout<<endl;
	
	return 0;
}