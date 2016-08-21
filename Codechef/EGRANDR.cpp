#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while (t--)
	{
		vector <int> v;
		int n,a;
		cin>>n;
		for(int i=0; i<n; i++)
		{
			int a;
			cin>>a;
			v.push_back(a);
		}

		vector <int> :: iterator i;
		int flag = 0,sum=0;
		for(i=v.begin(); i!=v.end(); i++)
		{
			if(*i == 2)
			{
				cout<<"No"<<endl;
				flag = -1;
				break;
			}
			if(*i == 5)
				flag = 1;
			sum += *i;
		}

		if(flag == 0)
			cout<<"No"<<endl;

		else if((float(sum)/float(n)) < 4.0 && flag != -1)
			cout<<"No"<<endl;

		else if(flag == 1 && (float(sum)/float(n)) >= 4.0)
			cout<<"Yes"<<endl;

	}

	
	return 0;
}