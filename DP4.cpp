
#include <iostream>
using namespace std;
int array[3][3] = {1,2,3,
			   	   4,8,2,
			   	   1,5,3};

// 2,2 - > 0,0
int min(int a, int b, int c)
{
	return min(min(a,b) , c);
}
int mincost(int a,int b)
{
	if (a == 0 && b == 0)
		return array[0][0];

	else if (a == 0)
		return array[a][b] + array[a][b-1];
	
	else if (b == 0)
		return array[a][b] + array[a-1][b];

	else
		return array[a][b] + min((mincost(a-1,b)) , (mincost(a,b-1)), (mincost(a-1,b-1)) );
}
int main()
{
	cout << mincost(2,2);
	
	return 0;
}