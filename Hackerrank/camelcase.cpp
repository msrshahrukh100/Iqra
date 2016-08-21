#include <iostream>
using namespace std;

int solve(string a)
{
	int count = 0;
	if(a.size() == 0)
		return 0;

	for(int i=0; i<a.size(); i++)
		if(int(a[i]) >= 65 && int(a[i])<=90)
			count++;

	return count+1;
}

int main()
{
	string a;
	cin>>a;
	cout<<solve(a);
	
	return 0;
}