#include <iostream>
using namespace std;

int min(int a,int b,int c)
{
	return min(a,min(b,c));
}
int recur_solve(string a,string b,int m,int n)
{
	if(m == 0)
		return n;
	if(n == 0)
		return m;

	if(a[m-1] == b[n-1])
		return recur_solve(a,b,m-1,n-1);

	return 1 + min(recur_solve(a,b,m,n-1), recur_solve(a,b,m-1,n-1) ,recur_solve(a,b,m-1,n));
}

int dp_solve(string a,string b,int m,int n)
{
	int answer[m+1][n+1];
	for(int i=0; i<= m; i++)
	{
		for(int j=0; j<=n; j++)
		{
			if(i == 0)
				answer[i][j] = j;
			else if(j == 0)
				answer[i][j] = i;
			else if(a[i] == b[j])
				answer[i][j] = answer[i-1][j-1];
			else
				answer[i][j] = 1 + min(answer[i-1][j-1], answer[i][j-1], answer[i-1][j]);
		}
	}

	return answer[m][n];
}
int main(int argc, char const *argv[])
{
	string a,b;
	cin>>a>>b;
	cout<<recur_solve(a,b,a.size(),b.size())<<endl;
	cout<<dp_solve(a,b,a.size(),b.size())<<endl;

	return 0;
}