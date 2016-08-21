#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<char> v;
	v.push_back('a');
	v.push_back('m');
	cout<<v[0]<<endl;
	v.clear();
	
	v.push_back('b');
	vector<vector<char> > n;
	n.push_back(v);
	cout<<n[0][1]<<endl;
	return 0;
}