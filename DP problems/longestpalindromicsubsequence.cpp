#include <iostream>
using namespace std;

string s;
int recur_solve(int i,int j)
{
	if(i == j)
		return 1;

	if(s[i] == s[j] && j == i+1)
		return 2;

	if(s[i] == s[j])
		return 2 + recur_solve(i+1,j-1);

	return max(recur_solve(i+1,j) , recur_solve(i,j-1));
	

}

int dp_solve()
{
	int l = s.size();

	int a[l][l];
	return a[1][1];

}

int main(int argc, char const *argv[])
{
	cin>>s;
	cout<<recur_solve(0,s.size()-1)<<endl;
	cout<<dp_solve();

	return 0;
}