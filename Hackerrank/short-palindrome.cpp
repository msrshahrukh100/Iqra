#include <iostream>
#include <vector>

using namespace std;
#define mod 1000000007
long long answer = 0;
vector<long long> s;
vector<long long> e;
long long C(long long a, long long b)
{
	long long k = a-b;
	if (k <= 0)
		k = 1;

	long long fa=1,fb=1,fc=1,l,m;
	for(int i=1; i<=a; i++)fa *= i;
	for(int i=1; i<=b; i++)fb *= i;
	for(int i=1; i<=k; i++)fc *= i;

	l = fb * fc;
	m = fa / l;
	return m;
}

bool is_valid(long long a,long long b)
{
	for(int i=0; i<s.size(); i++)
		if(s[i] == a && e[i] == b)
			return false;

	return true;
}

void solve(char *a, long long start,long long end)
{
	s.push_back(start);
	e.push_back(end);

	if (start > end)
		return ;
	if(a[start] == a[end-1])
	{
		// do something
		long long count[26] = {0},d=0;
		for(int i=start+1; i<(end-1); i++)
			count[a[i] - 'a']++;

		for(int i=0; i<26; i++)
			if(count[i] >= 2)
				d += C(count[i],2)% mod;

		answer += d;
	}

	if (is_valid(start+1,end))
		solve(a,start+1,end);

	if(is_valid(start,end-1))
		solve(a,start,end-1);


}

int main()
{
	char a[10000000];
	cin>>a;

	long long l=0,i=0;
	while(a[i++] != '\0')
		l++;

	solve(a,0,l);
	
	cout<<answer<<endl;

	return 0;
}