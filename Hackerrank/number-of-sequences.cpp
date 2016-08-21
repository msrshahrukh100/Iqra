#include <iostream>
using namespace std;


int solve(int *a,int n)
{
	n--;
	int answer = 1;
	do
	{
		if(a[n] == -1)
			answer *= (n+1);
	}while(n--);
	return answer;
}

int main()
{
	int n;
	cin>>n;
	int *a = new int [n];
	for(int i=0; i<n; i++)
		cin>>a[i];

	cout<<solve(a,n)<<endl;
	
	return 0;
}