#include <iostream>
using namespace std;

bool is_palindrome(char *a,int n)
{
	for(int i=0; i<n/2; i++)
		if(a[i] != a[i+(n/2)])
			return false;

	return true;
}

int solve(char *a,int n)
{
	// cout<<"---"<<is_palindrome(a,n)<<endl;
	int count = 0;
	int flag = 1;
	for(int i=n; i>0; i--)
	{
		int flag = 1;
		int k = i;
		while(k > 0)
		{
			if(is_palindrome(a,k) && k%2 == 0)
			{
				k = k/2; 
				flag = 0;
			}
			else
				break;
		}

		if(!flag)
		{
			count += k;
			break;
		}
		else
			count ++;
		// cout<<k<<endl;
	}

		return count;

}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		// char a[6] = "assa";
		// cout<<is_palindrome(a,4);
		char a[100000];
		cin>>a;
		
		int l=0,i=0;
		while(a[i++] != '\0')
			l++;

		cout<<solve(a,l)<<endl;
	}
	
	return 0;
}