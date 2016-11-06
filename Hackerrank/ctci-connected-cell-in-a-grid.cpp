#include <iostream>
#include <limits.h>
using namespace std;

int row,col;
bool is_safe(int i,int j,bool **visited,int **a)
{
	return (i>=0 && j>=0 && i<row && j<col && !visited[i][j] && a[i][j]);
}

int DFS_util(int **a,int i,int j,bool **visited,int count)
{
	visited[i][j] = true;

	int rowNbr[] = {-1, -1, -1,  0, 0,  1, 1, 1};
    int colNbr[] = {-1,  0,  1, -1, 1, -1, 0, 1};
    int found = 0;
    for(int l=0; l<8; l++)
    {
		if(is_safe(i+rowNbr[l],j+colNbr[l],visited,a))
		{
			count ++;
			found = 1;
			count = max(count,DFS_util(a,i+rowNbr[l],j+colNbr[l],visited,count));
		}
    }
    // cout<<count<<endl;
    return count;
}

int solve(int **a)
{

	bool **visited = new bool *[row];
	for(int i=0; i<row; i++)
		visited[i] = new bool [col];

	for(int i=0; i<row; i++)
		for(int j=0; j<col; j++)
			visited[i][j] = false;


	int m = INT_MIN;
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<col; j++)
		{
			if(a[i][j] && !visited[i][j])
				m = max(m,DFS_util(a,i,j,visited,1));
		}
	}

	return m;
}

int main(int argc, char const *argv[])
{
	cin>>row>>col;
	int **a = new int *[row];
	for(int i=0; i<row; i++)
		a[i] = new int[col];


	for(int i=0; i<row; i++)
		for(int j=0; j<col; j++)
			cin>>a[i][j];
	
	cout<<solve(a);	
	return 0;
}