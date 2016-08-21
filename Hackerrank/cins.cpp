#include <iostream>
#include <vector>
using namespace std;
int k;
int count = 0;

vector<int> s;
vector<int> e;

bool notchecked(int a,int b)
{
	for(int i=0; i<s.size(); i++)
		if(s[i] == a && e[i] == b)
			return false;

	return true;
}

int is_unique(string a,int start,int end)
{
	int c[26] = {0};
	int l=0;

	for(int i=start; i<end; i++)
		c[a[i]-'a']++;

	for (int i = 0; i <26 ; ++i)
		if(c[i] != 0)
			l++;

	return l;
}

void solve(string a, int start, int end)
{
	if(start < end)
	{
		int temp = is_unique(a,start,end);

		if(temp == k)
		{
			s.push_back(start);
			e.push_back(end);
			count++;
		}
		if(temp < k)
			return;

		if(notchecked(start+1 , end))
			solve(a,start+1,end);
		if(notchecked(start , end-1))
			solve(a,start,end-1);
	}
	else
		return;
}

int main()
{
	cin>>k;
	string a;
	cin>>a;
	solve(a,0,a.size());
	cout<<count<<endl;
	return 0;
}