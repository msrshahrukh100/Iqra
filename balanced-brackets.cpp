#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string a;
		cin>>a;
		vector<char> v;
		int flag = 1;
		for(int i=0; i<a.size(); i++)
		{
			if((a[i] == '(') || (a[i] == '{') || (a[i] == '['))
				v.push_back(a[i]);
			else
			{
				char temp;
				if(!v.empty())
					temp = v.back();
				else
				{
					flag = 0;
					break;
				}
				if((a[i] == '}' && temp == '{') || (a[i] == ']' && temp == '[') || (a[i] == ')' && temp == '('))
					v.pop_back();
				else
				{
					flag = 0;
					break;
				}
			}
		}
		if(flag == 1 && v.empty())
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	
	return 0;
}