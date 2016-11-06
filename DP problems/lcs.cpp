#include <iostream>
using namespace std;

int recursive_lcs(string a,string b,int n,int m)
{
	if(n == 0 || m == 0)
		return 0;

	if(a[n-1] == b[m-1])
		return 1 + recursive_lcs(a,b,n-1,m-1);

	else
		return max(recursive_lcs(a,b,n,m-1) , recursive_lcs(a,b,n-1,m));
}

int dp_lcs(string a,string b)
{
	int n = a.size();
	int m = b.size();
	int answer[n+1][m+1];

	for(int i=0; i<=n; i++)
	{
		for(int j=0; j<=m; j++)
		{
			if(i == 0 || j == 0)
				answer[i][j] = 0;

			else if(a[i-1] == b[j-1])
				answer[i][j] = 1 + answer[i-1][j-1];

			else
				answer[i][j] = max(answer[i-1][j], answer[i][j-1]);
		}
	}
	return answer[n][m];
}
 
int main()
{
	string a,b;

	cin>>a>>b;

	cout<<recursive_lcs(a,b,a.size(),b.size())<<endl;
	cout<<dp_lcs(a,b)<<endl;
	return 0;
}