#include <iostream>
using namespace std;

int recur_solve(string a, string b, int l1, int l2)
{
	if(l1 == 0 || l2 == 0)
		return 0;

	if(a[l1-1] == b[l2-1])
		return 1 + recur_solve(a,b,l1-1,l2-1);
	else
		return max(recur_solve(a,b,l1-1,l2),recur_solve(a,b,l1,l2-1)); 

}

int dp_solve(string a, string b,int m, int n)
{
	int answer[m+1][n+1];
	for(int i=0; i<=m; i++)
	{
		for(int j=0; j<=n; j++)
		{
			if(i == 0 || j == 0)
				answer[i][j] = 0;
			else if(a[i] == b[j])
				answer[i][j] = 1 + answer[i-1][j-1];
			else
				answer[i][j] = max(answer[i-1][j], answer[i][j-1]);

		}
	}

	return  answer[m][n];
}
int main(int argc, char const *argv[])
{
	string a,b;
	cin>>a>>b;

	cout<<recur_solve(a,b,a.size(),b.size())<<endl;
	cout<<dp_solve(a,b,a.size(),b.size())<<endl;
	return 0;
}