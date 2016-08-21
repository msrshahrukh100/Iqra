#include <iostream>
#define n 4
using namespace std;

int board[n][n] = {
{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0}
};

bool is_safe(int row,int col)
{
	for(int i=0; i<col; i++)
		if(board[row][i])
			return false;

	for (int i=row,j=col; i>=0,j>=0; i--,j--)
		if(board[i][j])
			return false;

	for(int i=row,j=col; i<n,j>=0; i++,j--)
		if(board[i][j])
			return false;

	return true;
}
void print()
{
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
			cout<<board[i][j]<<" ";

		cout<<endl;
	}
}

bool solveutil(int col)
{

	if(col >= n)
		return true;

	for(int i=0; i<n; i++)
	{
		if(is_safe(i,col))
		{
			board[i][col] = 1;
			if(solveutil(col+1))
				return true;
			board[i][col] = 0;
		}
	}

	return false;
}


int main()
{

	solveutil(0);
	print();
	return 0;
}
