// knight tour

#include <iostream>
using namespace std;
#define n 8
void print(int board[n][n])
{
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
			cout<<board[i][j]<<" ";
		cout<<endl;
	}
}
bool is_safe(int x,int y,int board[n][n])
{
	return (x>=0 && x<n && y>=0 && y<n && board[x][y] == -1);
}

bool solvektutil(int x,int y,int move,int board[n][n],int xMove[],int yMove[])
{
	if(move == n*n)
		return true;
	int nextx,nexty;
	for(int i=0; i<n; i++)
	{
		nextx = x + xMove[i];
		nexty = y + yMove[i];	
		if(is_safe(nextx,nexty,board))
		{
			board[nextx][nexty] = move;
			if(solvektutil(nextx,nexty,move+1,board,xMove,yMove))
				return true;
			else
				board[nextx][nexty] = -1;
		}

	}
	return false;

}
int solvekt(int board[n][n])
{
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			board[i][j] = -1;

	board[0][0] = 0;
    int xMove[8] = {  2, 1, -1, -2, -2, -1,  1,  2 };
    int yMove[8] = {  1, 2,  2,  1, -1, -2, -2, -1 };
	
	if(solvektutil(0,0,1,board,xMove,yMove))
		print(board);
	else
		cout<<"No solution"<<endl;
}

int main()
{
	int board[n][n];
	solvekt(board);
	
	return 0;
}