#include <iostream>
#include <stack>
using namespace std;
int main()
{
	stack <char> s;

	string a;
	cin>>a;
	
	for(int i=0; i<a.size(); i++)
		s.push(a[i]);

	while(!s.empty())
	{
		cout<<s.top();
		s.pop();
	}
	return 0;
}