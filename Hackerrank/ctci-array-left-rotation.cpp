#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,d;
	cin>>n>>d;
	int times_rotate = d % n;
	vector<int> v(n+1);
	for(int i=0; i<n; i++)
		cin>>v[i];

	for(int i = times_rotate; i < n; i++)
		cout<<v[i]<<" ";
	for(int i=0; i<times_rotate; i++)
		cout<<v[i]<<" ";
	cout<<endl;


	return 0;
}