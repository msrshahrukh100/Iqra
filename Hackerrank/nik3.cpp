#include <iostream>
using namespace std;
int solve(int *a,int start,int end)
{
	long long sum=0;
	for(long long i=start; i<end; i++)
		sum += a[i];

	if (sum == 0)
		return end - 1;
	
	if(sum % 2 != 0)
		return 0;

	sum = sum / 2;
	int flag;
	for(long long i=start; i<end; i++)
	{
		sum = sum - a[i];
		if(sum == 0)
		{
			flag = i;
			break;
		}
		else if(sum < 0)
		{
			flag = -1;
			break;
		}
	}
	if (flag == -1)
		return 0;
	else
	{
		flag++;
		return 1 + max(solve(a,start,flag),solve(a,flag,end));
	}


	return flag;


}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		int a[n+1];

		for(long long i=0; i<n; i++)
			cin>>a[i];

		cout<<solve(a,0,n)<<endl;

	}
	
	return 0;
}