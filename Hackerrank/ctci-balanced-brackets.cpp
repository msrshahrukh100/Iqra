#include <iostream>
#include <stack>

using namespace std;

bool match_pair(char a,char b)
{
	if((b == '(' && a == ')') || (b == '[' && a == ']') || (b == '{' && a == '}'))
		return true;
	return false;
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	while(n--)
	{
		string ex;
		cin>>ex;
		stack <char> s;
		int flag = 1;
		for(int i=0; i<ex.size(); i++)
		{
			if(ex[i] == '{' || ex[i] == '[' || ex[i] == '(')
				s.push(ex[i]);

			else
			{
				// cout<<"ex[i] "<<ex[i]<<" s.top() "<<s.top()<<endl;
				if(s.empty())
				{
					cout<<"NO"<<endl;
					flag = 0;
					break;
				}
				
				if(!match_pair(ex[i],s.top()))
				{
					cout<<"NO"<<endl;
					flag = 0;
					break;
				}
				else
					s.pop();
			}

		}
		if(flag && s.empty())
			cout<<"YES"<<endl;
		else if(flag && !s.empty())
			cout<<"NO"<<endl;
	}
	return 0;
}