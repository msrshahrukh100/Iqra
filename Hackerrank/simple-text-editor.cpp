#include <iostream>
#include <vector>
using namespace std;
struct operation
{
	int type;
	string str;
};
int main()
{
	int q;
	cin>>q;
	string s = "";
	string w;
	int k;
	vector <operation> operation_stack;
	operation temp;
	while(q--)
	{
		int otype;
		cin>>otype;
		switch(otype)
		{
			case 1 :
				cin>>w;
				s += w;
				temp.type = 1;
				temp.str = w;
				operation_stack.push_back(temp);
				break;
			case 2 :
				cin>>k;
				temp.type = 2;
				temp.str = s.substr(s.size()-k,k);
				s.erase(s.size()-k,k);
				operation_stack.push_back(temp);
				break;
			case 3 :
				cin>>k;
				cout<<s[k-1]<<endl;
				break;

			case 4 :
				temp = operation_stack.back();
				operation_stack.pop_back();
				if(temp.type == 1)
				{
					int l = temp.str.size();
					s.erase(s.size()-l,l);
				}
				else
				{
					s += temp.str;
				}
				break;
		}
	}

	
	return 0;
}