#include <iostream>
using namespace std;

string solve(int n,int k,string a)
{
	int diff = 0,i,j;
	if(n%2 == 0)
	{
		for(i=0,j=n-1; j>=n/2,i<n/2; i++,j--)
			if(a[i] != a[j])
				diff++;
	}
	else
	{
		for(i=0,j=n-1; j>=n/2 + 1,i<n/2; i++,j--)
			if(a[i] != a[j])
				diff++;
	}
	if(diff > k)
		return "-1";

	while(k)
	{
			if(n%2 == 0)
			{
				for(i=0,j=n-1; j>=n/2,i<n/2; i++,j--)
				{	
					if(a[i] != a[j])
					{
						if(diff < k && ((a[i] != '9') && (a[j] != '9')))
						{
							a[i] = '9';a[j] = '9';
							diff--;
							k--;k--;
						}
						else if(diff < k && ((a[i] != '9') || (a[j] != '9')))
						{
							if(a[i] != '9')
								a[i] = '9';
							else
								a[j] = '9';
							diff--;
							k--;
						}
					}
					else
					{
						if(k - diff >= 2)
						{
							a[i] = '9';a[j] = '9';
							k--;k--;
						}
					}
				}
			}
			else
			{
				for(i=0,j=n-1; j>=n/2 + 1,i<n/2; i++,j--)
					{
						if(a[i] != a[j])
					{
						if(diff < k && ((a[i] != '9') && (a[j] != '9')))
						{
							a[i] = '9';a[j] = '9';
							diff--;
							k--;k--;
						}
						else if(diff < k && ((a[i] != '9') || (a[j] != '9')))
						{
							if(a[i] != '9')
								a[i] = '9';
							else
								a[j] = '9';
							diff--;
							k--;
						}
					}
					else
					{
						if(k - diff >= 2)
						{
							a[i] = '9';a[j] = '9';
							k--;k--;
						}
					}

					}
			}	
	}



	return a;
}
int main(int argc, char const *argv[])
{
	int n,k;
	string a;
	cin>>n>>k>>a;
	cout<<solve(n,k,a)<<endl;

	return 0;
}