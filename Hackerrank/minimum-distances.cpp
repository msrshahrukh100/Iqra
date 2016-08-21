#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int soln = -1;
void solve(vector<int> v,int n,int a)
{
	for(int i=0; i<v.size()-1; i++)
	{
		if(v[i] == a && (v.size()-1 - i)<soln )
			soln = v.size()-1 - i;
	}

}

int main()
{
	int n;
	cin>>n;
	vector<int> v;
	for(int i=0; i<n; i++)
	{
		int a;
		cin>>a;
		v.push_back(a);
		solve(v,n,a);
	}
		cout<<soln<<endl;

	
	return 0;
}
