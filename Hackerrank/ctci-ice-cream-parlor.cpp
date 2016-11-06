#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
int main(int argc, char const *argv[])
{
	int q;
	cin>>q;
	while(q--)
	{
		int n,m;
		cin>>n>>m;
		map <int,int> indices;
		int a[m];
		for(int i=0; i<m; i++)
		{
			cin>>a[i];
			indices[a[i]] = i;
		}

		sort(a,a+m);

		int o;
		for(int i=0; i<m-1; i++)
		{
			o = a[i];

			if(binary_search(a+i+1,a+m,n-o))
				break;

		}
		int t1 = indices[o]+1;
		int t2 = indices[n-o]+1;

		if(t1 == t2)
			cout<<t1-1<<" "<<t2<<endl;	
		else if(t1 > t2)
			cout<<t2<<" "<<t1<<endl;
		else
			cout<<t1<<" "<<t2<<endl;

	}
	return 0;
}