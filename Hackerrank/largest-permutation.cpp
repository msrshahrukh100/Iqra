#include <iostream>
using namespace std;
int main()
{
	
	int n,k;
	cin>>n>>k;
	int a[n+2];
	for(int i=1; i<=n; i++)
		cin>>a[i];

	int index[n+2];

	for(int i=1; i<=n; i++)
		index[a[i]] = i;

	int count = 0;
	for(int i=1; i<=n; i++)
	{
		if(a[i] != n-i+1)
		{
			int temp = a[i];
			a[i] = a[index[n-i+1]];
			a[index[n-i+1]] = temp;
			count ++;
		}
		if(count == k)
			break;
	}






	for(int i=1; i<=n; i++)
		cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}