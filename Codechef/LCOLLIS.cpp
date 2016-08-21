#include <iostream>
using namespace std;

int findcomb(int a)
{
	int p1 = 1,p2 = 1,a2 = a-2;

	for(int i=1; i<= a; i++)
		p1 *= i;
	for(int i=1; i<= a2; i++)
		p2 *= i;

	return p1/(p2*2); 
}

int findcol(string a)
{
	int count=0;
	for(int i=0; i<a.length(); i++)
		if (a[i] == '1')
			count ++;
	
	
	if(count <= 1)
		return 0;
	
	if (count == 2)
		return 1;
	
	return findcomb(count);
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int col=0,n,k;
		cin>>n>>k;
		while(n--)
		{
			string a;
			cin>>a;
			col += findcol(a);
		}

		cout<<col<<endl;
	}
	
	return 0;
}