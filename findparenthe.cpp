#include <iostream>
using namespace std;
int findcoefficient(int n,int k)
{
	int res = 1;
	if (k > n - k)
		k = n-k;
	for (int i=0; i<k; i++)
	{
		res *= (n-i);
		res /= (i+1);
	}
	return res;

}
int findcatalan(int n)
{
	return findcoefficient(2*n,n)/(n+1);
}
int main()
{
	int n;
	cin>>n;
	if (n %2 != 0)
		cout<<"Not possible"<<endl;
	else
		cout<<findcatalan(n/2)<<endl;
	
	return 0;
}