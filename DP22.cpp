#include <iostream>
using namespace std;
int min(int a, int b , int c)
{
	return min(min(a,b) , c);
}

int findnumberopt(string a, string b,int l1, int l2)
{
	int solution[l1+2][l2+2];
	for (int i=0 ; i< l1 ; i++)
	{
		for(int j=0; j< l2 ; j++)
		{
			if (i==0)
				solution[i][j] = j;
			else if (j==0)
				solution[i][j] = i;

			else if(a[i] == b[j])
				solution[i][j] = solution[i-1][j-1];

			else 
				solution[i][j] = 1 + min(solution[i][j-1],solution[i-1][j],solution[i-1][j-1]);

		}
	}

	return solution[l1-1][l2-1];
}

int main()
{
	string a,b;
	cin>>a>>b;
	cout<<"The minimum number of operations required is "<<findnumberopt(a,b,a.length(),b.length())<<endl;
	return 0;
}