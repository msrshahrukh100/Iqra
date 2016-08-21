#include <iostream>
using namespace std;
int main()
{
	int n, m1=0,m2=0;
	cin >> n;
	int s[n];
	int sum = 0;
	for (int i=0; i<n;i++)
		cin>>s[i];
	int candy[n] = {0};

	for (int i=0; i<n-1;i++)
	{
		if(s[i] < s[i+1] || i==1)
			candy[i] = 1;
		else 
			candy[i] = candy[i-1] + 1;
	}

	for (int i=n-1; i>=0;i--)
	{
		if(s[i-1] < s[i])
			candy[i] = candy[i-1] + 1;
	}

	for (int i=0; i<n;i++)
		sum += candy[i];
	
	cout<<sum;
	return 0;
}