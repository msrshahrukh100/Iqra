#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n,temp;
	cin>>n;
	vector<int> v;
	for(int i=0; i<n; i++)
	{
		cin>>temp;
		v.push_back(temp);
	}

	int flag = 1,days = 0;
	while(flag)
	{
		flag = 0;
		days ++;
		vector <int> to_be_removed;
		for(int i=0; i<v.size()-1; i++)
		{
			if(v[i] < v[i+1])
			{
				to_be_removed.push_back(i+1);
				flag = 1;
			}
		}

		vector<int> t = v;
		for(int i=0; i<to_be_removed.size(); i++)
			v.erase(to_be_removed[i] + v.begin() - i );
	}
	cout<<days - 1<<endl;
	
	return 0;
}