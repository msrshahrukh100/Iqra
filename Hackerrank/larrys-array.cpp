#include <iostream>
using namespace std;
// void solve(int a[],int n)
// {
// 	for(int i=1; i<n-1; i++)
// 	{
// 		if((a[i]>a[i+1] && a[i]>a[i-1] && a[i+1]>a[i-1]) || 
// 			(a[i]<a[i+1] && a[i]<a[i-1] && a[i-1]<a[i+1]) ||
// 			(a[i]<a[i-1] && a[i]>a[i+1] && a[i+1]<a[i-1]))
// 		{
// 			cout<<"NO"<<endl;
// 			return;
// 		}
// 	}
// 		cout<<"YES"<<endl;
// 		return;
// }

int min(int a,int b,int c)
{
	return min(min(a,b),c);
}

void solve2(int a[],int n)
{
	for(int i=0; i<n; i++)
	{
		for(int j=i+1; j<n-1; j++)
		{
			switch(min(a[j-1],a[j],a[j+1]))
			{
				case a[j]:
					swap1(a,j);
					break;
				case a[j+1]:
					swap2(a,j);
					break;
				case a[j-1]:
					cout<<"NO"<<endl;
					return;

			}
		}
	}
	cout<<"YES"<<endl;
	return;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0; i<n; i++)
			cin>>a[i];
		solve(a,n);
	}
	
	return 0;
}