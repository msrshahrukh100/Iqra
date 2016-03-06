#include <iostream>
using namespace std;

void swap(int *a,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void selectionsort(int arr[], int n)
{
	int i,j,min;

	for (i=0;i<n-1;i++)
	{
		j = i+1;
		min = i;
		while (j<n)
		{
			if(arr[j] < arr[min])
				min = j;

			j++;
		}

		swap(&arr[i],&arr[min]);
	}
}

int main()
{

	int arr[]={5,1,88,7,1,13,6,99,105,44,25,13};
	int n = sizeof(arr)/sizeof(int);


	for(int i=0;i<n;i++)
		cout<<arr[i]<<"  ";
	cout<<endl;


	selectionsort(arr,n);


	for(int i=0;i<n;i++)
		cout<<arr[i]<<"  ";
	cout<<endl;

	/* code */
	return 0;
}