#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int q;
	cin>>q;
	while(q--)
	{
		string a;
		string b;

		cin>>a>>b;

		bool notnego[a.size()];
		for(int i=0; i<a.size(); i++)
		{
			notnego[i] = isupper(a[i]);
			a[i] = toupper(a[i]);
		}
		int j=0;
		bool found = false;
		for(int i=0; i<a.size(); i++)
		{
			if(a[i] == b[j])
			{
				j++;
				for(int k=i+1; k<a.size(); k++)
				{
					if(a[k] == b[j])
						j++;
					else if (a[k] != b[j] && notnego[k])
					{
						j=0;
						break;
					}
					if (j == b.size())
					{
						found = true;
						break;
					}
				}
				if (j == b.size())
					{
						found = true;
						break;
					}
			}
			if(found)
				break;

		}
		if(found)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}