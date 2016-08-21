#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n+1];
	for(int i=0; i<n; i++)
		cin>>a[i];

	int count[100] = {0};

	for(int i=0; i<n; i++)
		count[a[i]]++;

	for(int i=0; i<100; i++)
		cout<<count[i]<<" ";
	
	return 0;
}