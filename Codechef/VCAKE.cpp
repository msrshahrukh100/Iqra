#include <iostream>
using namespace std;

int cake(int p,int c[], int n)
{
	if(p == 0 && n==0)
	{
		cout << "Yes" <<endl;
		return 1;
	}

	if (n == 0 && p !=0 )
	{
		cout<< "No" <<endl;
		return 0;
	}

	return cake(p-c[n-1],c,n-1);
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
			int a,b,c[3];
			cin>>a>>b;
			for (int i=0; i<3; i++)
				cin>>c[i];
			
			cake(a*b,c,3);

	}

	
	return 0;
}