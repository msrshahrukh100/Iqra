#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <limits.h>

using namespace std;
int main(int argc, char const *argv[])
{
	vector<int> natural_nubers(100005);
	for(int i=1; i<=100000; i++)
		natural_nubers[i] = i;

	int t;
	cin>>t;

	while(t--)
	{
		int n,k;
		cin>>n>>k;

		vector<int> *choices;
		choices = new vector<int> [n+3];

		bool taken[n+3];
		int notpossible = 0;
		for(int i=1; i<=n; i++)
		{
			if(i-k > 0)
				choices[i].push_back(i-k);

			if(i+k <= n)
				choices[i].push_back(i+k);

			if(i+k > n  && i-k <= 0)
			{
				notpossible = 1;
				break;
			}

			taken[i] = false;

		}

		if(notpossible)
		{
			cout<<"-1"<<endl;
			continue;
		}

		vector<int> answer;
		for(int i=1; i<=n; i++)
		{
			int minimum = INT_MAX;
			for(int j=0; j<choices[i].size(); j++)
			{
				if(choices[i][j] < minimum)
					minimum = choices[i][j];
			}
				if(taken[minimum])
				{
					notpossible = 1;
					break;
				}
				taken[minimum] = true;
				answer.push_back(minimum);
		}

		if(notpossible)
		{
			cout<<"-1"<<endl;
			continue;
		}
		for(int i=0; i<n; i++)
			cout<<answer[i]<<" ";
		cout<<endl;

		
	}
	return 0;
}