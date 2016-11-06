#include <iostream>
using namespace std;

int min(int a,int b,int c)
{
	return min(a,min(b,c));
}

int recur_soln(string a,string b,int n,int m)
{
	if(n == 0)
		return m;

	if(m == 0)
		return n;

	if(a[n-1] == b[m-1])
		return recur_soln(a,b,n-1,m-1);

	else
		return 1 + min(recur_soln(a,b,n-1,m),recur_soln(a,b,n,m-1),recur_soln(a,b,n-1,m-1));
						//  delete               insert              replace
}

int dp_soln(string a,string b)
{
	int n = a.size();
	int m = b.size();


	int answer[n+1][m+1];

	for(int i=0; i<=n; i++)
	{
		for(int j=0; j<=m; j++)
		{
			if(i == 0)
			{
				answer[i][j] = j;
				continue;
			}
			if(j == 0)
			{
				answer[i][j] = i;
				continue;
			}

			if(a[i-1] == b[j-1])
				answer[i][j] = answer[i-1][j-1];

			else
				answer[i][j] = 1 + min(answer[i][j-1],answer[i-1][j],answer[i-1][j-1]);


		}

	}

	return answer[n][m];
}

int main()
{
	string a,b;
	cin>>a>>b;
	cout<<recur_soln(a,b,a.size(),b.size())<<endl;
	cout<<dp_soln(a,b)<<endl;
	return 0;
}