#include <iostream>
using namespace std;

long long fact(int a)
{
	if(a == 1 || a == 0)
		return 1;
	return a * fact(a-1);
}

long long solve(int n,int m,int c)
{
	return fact(n-c+m-1);
}

int main()
{
	int n,m,c;
	cin>>n>>m>>c;


	cout<<solve(n,m,c)<<endl;
	
	return 0;
}