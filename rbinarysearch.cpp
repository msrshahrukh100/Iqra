#include <iostream>
using namespace std;

void rbs(int arr[],int s,int l,int r)
{

	if(l<=r)
	{
		int m = l+(r-l)/2;

		if (arr[m] == s) {cout<<"Element found at "<<m<<" position";return;}

		if(arr[m] > s)
		{rbs(arr,s,l,m-1);}

		else
		{rbs(arr,s,m+1,r);}
	}
	else
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

	rbs(arr,s,0,n);

	/* code */
	return 0;
}