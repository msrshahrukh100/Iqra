#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	vector<int> v1;
	vector<int> v2;
	vector<int> v3;
	int n,t;
	cin>>n>>t;
	for(int i=0; i<n; i++)
	{
		int a,b;
		cin>>a>>b;
		v1.push_back(a);
		v2.push_back(b);
	}
	int j=0,sum=0;
	for(int i=0; i<n; i++)
	{
		if(v2[i] != 0)
			v3.push_back(v1[i]);
		else
			sum += v1[i];
		
	}

	sort(v3.begin(),v3.end());
	vector <int> :: reverse_iterator i;
	for (i = v3.rbegin(); i!= v3.rend(); i++)
	{
		if(j<t)
		{
			sum += *i;
		}
		else
		{
			sum -= *i;
		}

		j++;
	}

	cout<<sum<<endl;

	
	return 0;
}