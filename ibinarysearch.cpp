#include <iostream>
using namespace std;

void ibs(int arr[],int s,int l,int r)
{

	while(l<=r)
	{
		int m = l+(r-l)/2;

		if (arr[m] == s) {cout<<"Element found at "<<m<<" position";return;}

		if(arr[m] > s)
		{r = m-1;}

		else
		{l = m+1;}
	}
	cout<<"Element not found";
	return;
}

int main()
{

	int s;
	int arr[]={2,3,8,15,20,55,66,87,98,105,111,125};
	int n = sizeof(arr)/sizeof(int);
	cout<<"Enter the element to be searched : ";
	cin>>s;

	ibs(arr,s,0,n);

	/* code */
	return 0;
}