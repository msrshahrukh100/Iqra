#include <iostream>
using namespace std;

void swap(int *a,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void insertionsort(int arr[], int n)
{
	int i,j,min;

	for (i=1 ; i<n;i++)
	{
		int key = arr[i];
		j = i-1;
		while(j >= 0 && key<arr[j])
		{
			arr[j+1] = arr[j];
			j--;
		}

		arr[j+1] = key;
	}


}

int main()
{

	int arr[]={5,1,88,7,1,13,6,99,105,44,25,13};
	int n = sizeof(arr)/sizeof(int);


	for(int i=0;i<n;i++)
		cout<<arr[i]<<"  ";
	cout<<endl;


	insertionsort(arr,n);


	for(int i=0;i<n;i++)
		cout<<arr[i]<<"  ";
	cout<<endl;

	/* code */
	return 0;
}