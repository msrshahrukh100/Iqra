#include <iostream>
using namespace std;

int recur_solve(int *a,int n,int no_of_shares,int second)
{
	if(n < 0 || (no_of_shares <= 0 && second == 1 ))
	{
		if(no_of_shares <= 0)
			cout<<"sadas the n : "<<n<<endl;
		return 0;
		
	}
	second = 1;
	return max((-1*a[n-1])+recur_solve(a,n-1,no_of_shares+1,second) , a[n-1]+recur_solve(a,n,no_of_shares-1,second));
}

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		int n;
		cin>>n;
		int a[n+1];
		for(int i=n-1; i>=0; i--)
			cin>>a[i];

		cout<<recur_solve(a,n,0,0)<<endl;
	}
	
	return 0;
}