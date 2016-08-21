#include <iostream>
using namespace std;
int m(int a)
{
	if (a >= 0)
		return a;
	return -1 * a; 
}
int main()
{
	int magic1[3][3] = {
		{4,9,2},
		{3,5,7},
		{8,1,6}
	};
	int magic2[3][3] = {
		{2,5,6},
		{9,5,1},
		{4,3,8}
	};

	int a[3][3];

	for(int i=0; i<3; i++)
		for(int j=0; j<3; j++)
			cin>>a[i][j];

	int answer1 = 0, answer2 = 0;
 	for(int i=0; i<3; i++)
		for(int j=0; j<3; j++)
			answer1 += m(a[i][j] - magic1[i][j]);

 	for(int i=0; i<3; i++)
		for(int j=0; j<3; j++)
			answer2 += m(a[i][j] - magic2[i][j]);


	cout<<min(answer1,answer2)<<endl;

	


	
	return 0;
}