#include <iostream>
using namespace std;
void merge(int arr[],int l,int m,int r)
{
	int i,j,k;
	int n1 = m-l+1; //this extra 1 sice o based indexing
	int n2 = r-m;
	int L[n1],R[n2];

	for(int i=0;i<n1;i++)
		L[i] = arr[l+i];

	for (int i=0;i<n2;i++)
		R[i] = arr[m+1+i];

	i=0;j=0;k=l;
	while(i<n1 && j<n2)
	{
		if (L[i] <= R[j])
			arr[k++] = L[i++];

		else
			arr[k++] = R[j++];

	}

	while(i<n1)
		arr[k++] = L[i++];

	while(j<n2)
		arr[k++] = R[j++];


}


void mergesort(int arr[],int l,int r)
{
	if(l<r){
	int m = l+(r-l)/2;
	mergesort(arr,l,m);
	mergesort(arr,m+1,r);
	merge(arr,l,m,r);
	}
}

int main()
{

	int arr[]={5,1,88,7,1,13,6,99,105,44,25,13};
	int n = sizeof(arr)/sizeof(int);


	for(int i=0;i<n;i++)
		cout<<arr[i]<<"  ";
	cout<<endl;


	mergesort(arr,0,n);


	for(int i=0;i<n;i++)
		cout<<arr[i]<<"  ";
	cout<<endl;

	
	return 0;
}