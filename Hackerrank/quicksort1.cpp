#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n+1];
	for(int i=0; i<n; i++)
		cin>>a[i];

	vector<int> left;
	vector<int> right;


	for(int i=0; i<n; i++)
	{
		if(a[i] > a[0])
			right.push_back(a[i]);

		else if(a[i] < a[0])
			left.push_back(a[i]);
	}

	for(int i=0; i<left.size(); i++)
		cout<<left[i]<<" ";
	cout<<a[0]<<" ";
	for(int i=0; i<right.size(); i++)
		cout<<right[i]<<" ";

	return 0;
}