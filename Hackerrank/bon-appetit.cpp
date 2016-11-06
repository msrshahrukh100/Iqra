#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,k;
	cin>>n>>k;
	int a[n];
	int sum = 0;
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
		if(i != k)
			sum += a[i];
	}
	int charged;
	cin>>charged;
	if(charged == sum/2)
		cout<<"Bon Appetit"<<endl;
	else
		cout<<charged-(sum/2)<<endl;
	return 0;
}