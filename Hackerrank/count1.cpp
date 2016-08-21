#include <iostream>
using namespace std;
int solve(string str)
{
	int l=0,r = str.size()-1;
	int m;

	while(l <= r)
	{
		m = l + (r-l)/2 ;

		if(str[m] == '1' && str[m+1] == '0')
			break;
		else if(str[m] == '1' && str[m+1] == '1')
		{
			l = m+1;
		}
		else
			r = m-1;
			
	}

	return m+1;
}
int main()
{
	string str;
	cin>>str;
	cout<<solve(str);
	
	return 0;
}