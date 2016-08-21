#include <iostream>
using namespace std;
int m(int a)
{
	if (a >= 0)
		return a;
	return -1 * a; 
}
int solve(int a[3][3])
{
	int count = 0;
	
	for(int i = 0; i<3; i++)
	{
		int sum = 0;
		for(int j=0; j<3; j++)
			sum += a[i][j];

		cout<<m(sum - 15)<<endl;
		count += m(sum - 15);
	}

	for(int i = 0; i<3; i++)
	{
		int sum = 0;
		for(int j=0; j<3; j++)
			sum += a[j][i];

		count += m(sum - 15);
	}

	int sum = 0;
	for(int i=0; i<3; i++)
		sum += a[i][i];

	count += m(sum - 15);

	sum = a[0][2] + a[1][1] + a[2][0];
	count += m(sum - 15);


	return count;
}
int main()
{
	int a[3][3];

	for(int i=0; i<3; i++)
		for(int j=0; j<3; j++)
			cin>>a[i][j];


	cout<<solve(a)<<endl;
	
	return 0;
}