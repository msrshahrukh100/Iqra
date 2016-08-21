#include <iostream>
using namespace std;
void solve(int zeroes,int ones,string str,int len)
{
	if(len == str.size())
	{
		cout<<str<<" ";
		return;
	}

	solve(zeroes,ones+1,str+"1",len);

	if(ones > zeroes)
		solve(zeroes+1,ones,str+"0",len);
}
int main()
{
	int n;
	cin>>n;
	string str = "";
	solve(0,0,str,n);
	
	return 0;
}