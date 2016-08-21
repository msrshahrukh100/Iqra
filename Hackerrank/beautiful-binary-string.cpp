#include <iostream>
using namespace std;
int count = 0;
void solve(string a, int n, int start)
{
	int flag = 0;
	for(int i=start; i<n-2; i++)
	{

		if(a[i] == '0' && a[i+1] == '1' && a[i+2] == '0')
		{
			a[i+2] = '1';
			count ++;
			flag = 1;
			return solve(a,n,i+2);
		}
	}

	if(flag == 0)
		return ;
}


int main()
{
	int n;
	string a;
	cin>>n;
	cin>>a;
	solve(a,n,0);
	cout<<count<<endl;
	return 0;
}