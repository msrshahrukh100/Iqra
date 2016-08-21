#include <iostream>
#include <sstream>
#include <string>

using namespace std;


void solve(int count,int n,int k,string str)
{
	if(str.size() == k)
	{
		cout<<str<<endl;
		return;
	}
	
	for(int i = count + 1; i<n; i++)
	{
		ostringstream ss;
		ss<<i;
		solve(i,n,k,str+ss.str());
		
	}

}

int main()
{
	int n,k,count = 0,i=5;
	cin>>n>>k;
	string str = "";
	ostringstream ss;
	ss<<i;
	str = str+ss.str();
	cout<<str;
	solve(count,n,k,str);
	
	return 0;
}