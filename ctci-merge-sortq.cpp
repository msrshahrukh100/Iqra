#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
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

		int inversions = 0;

		for(int i=0; i<n-1; i++)
			for(int j=i+1; j<n; j++)
				if(a[j] < a[i])
					inversions++;

		cout<<inversions<<endl;

	}
	return 0;
}