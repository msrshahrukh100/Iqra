#include <iostream>
using namespace std;
int max(int a, int b, int c)
{
	return max(max(a,b) , c);
}
int findlcs(string a, string b, int l1, int l2)
{
	if (l1 == 0 || l2 == 0)
		return 0;

	else if (a[l1-1] == b[l2-1])
		return 1 + findlcs(a,b,l1-1,l2-1);

	else 
		return max(findlcs(a,b,l1-1,l2), findlcs(a,b,l1,l2-1), findlcs(a,b,l1-1,l2-1));
}

int main()
{
		string a,b;
	cin>>a>>b;
	cout<<"The minimum number of operations required is "<<findlcs(a,b,a.length(),b.length())<<endl;

	
	return 0;
}