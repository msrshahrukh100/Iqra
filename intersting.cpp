#include <iostream>
using namespace std;

int solve(char **a, int n)
{
	int movesx[8] = {1,1,1,0,-1,-1,-1,0};
	int movesy[8] = {1,0,-1,-1,-1,0,1,1};


	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(a[i][j] == )
		}
	}

}


int main()
{
	char **a;
	int n;
	cout<<"Enter the size of matrix: ";
	cin>>n;

	for (int i=0; i<n; i++)
		a[i] = new char [n];

	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			cin>>a[i][j];


	cout<<solve(a,n);


	
	return 0;
}