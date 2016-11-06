#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct difference
{
	int diff;
	int u,v;
};

int mod(int a)
{
	if(a>=0)
		return a;
	return -1*a;
}

bool mycompare(const difference &a, const difference &b)
{
	return a.diff < b.diff;
}
int main(int argc, char const *argv[])
{
	vector<difference> v;
	int n,k;
	cin>>n>>k;
	int a[n];
	bool taken1[n];
	bool taken2[n];
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
		if(i != 0)
		{
			int t = i;
			while(t--)
			{
				difference temp;
				temp.diff = mod(a[i]-a[t]);
				temp.u = a[i];
				temp.v = a[t];
				v.push_back(temp);
			}
		}
		taken1 = false;
		taken2 = false;
	}

	sort(v.begin(),v.end(),mycompare);
	for(int i=0; i<v.size(); i++)
	{
		cout<<v[i].diff<<" u : "<<v[i].u<<" v : "<<v[i].v<<endl;
		
	}
	int answer = 0,count = 0;
	for(int i=0; i<v.size(); i++)
	{
		if(!taken1[v[i].u] && !taken1[v[i].v] && !taken2[v[i].u] && !taken2[v[i].v])
		{
			taken1[v[i].u] = true;
			taken2[v[i].v] = true;
			answer += v[i].diff;
			count ++;
		}
		if(count == k)
			break;

	}

	return 0;
}