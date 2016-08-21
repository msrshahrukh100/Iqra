#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
vector <long long> a;
vector<long long> b;
vector<long long> diff;
int main()
{
	int n;
	cin>>n;
	int tt;
	for(int i=0; i<n; i++)
	{
		cin>>tt;
		a.push_back(tt);
	}
	for(int i=0; i<n; i++)
	{
		cin>>tt;
		b.push_back(tt);		
	}

	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	for(int i=0; i<n; i++)
		diff.push_back(a[i] - b[i]);
		

	int temp = accumulate(diff.begin(),diff.end(),0);

	if(temp == 0)
	{
		int answer = 0;
		vector<long long> :: iterator i;
		for(i = diff.begin(); i != diff.end(); i++)
			if(*i >= 0)
				answer += *i;

		cout<<answer<<endl;

	}
	else
		cout<<"-1"<<endl;


	return 0;
}