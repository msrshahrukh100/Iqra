#include <iostream>
using namespace std;

bool solve(string *a,string *b,int l1,int l2)
{
	if((l2 == 0) && (l1 != 0))
		return false;

	if(l1 == 0)
		return true;

	if((*a)[l1-1] == (*b)[l2-1])
		return solve(a,b,l1-1,l2-1);
	else
		return solve(a,b,l1,l2-1);

}

int main()
{
	string a,b;

	cin>>a>>b;
	
	solve(&a,&b,a.size(),b.size()) ? cout<<"Yes its substring" : cout<<"No its not. ";
	
	return 0;
}