#include <iostream>
#include <limits.h>
#include <stdlib.h>
using namespace std;

int cmpfunc(const void *a[], const void *b[])
{

	// cout<<*(int *)b<<endl;
	// cout<<*(int *)a<<endl;
	return (*(int *)a - *(int *)b);
}
int main()
{

	// int n,k;
	// cin>>n>>k;
	int test1[2][2]={{1,2},{3,4}};
	int test2[1][2]={3,4};

	//start time end time value
	// int a[k][3]={0};
	// for(int i=0; i<k; i++)
	// 	cin>>a[i][1]>>a[i][0]>>a[i][2];
	qsort(**test1,2,sizeof(int),cmpfunc);
	// cmpfunc((const void **)test1,(const void **)test2);

	// for(int i=0; i<k; i++)
	// 	cout<<a[i][1]<<" "<<a[i][0]<<" "<<a[i][2]<<endl;







	
	return 0;
}