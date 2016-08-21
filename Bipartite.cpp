#include <iostream>
#include <queue>
using namespace std;
#define V 4

bool isBipartite(int G[V][V],int src)
{

	queue<int> q;
	int color[V];
	for(int i=0; i<V; i++)
		color[i] = -1;

	color[src] = 1;
	q.push(src);

	while(! q.empty())
	{
		int u ;
		u = q.front();

		for(int v=0; v<V; v++)
		{
			if(G[u][v] && color[v] == -1)
			{
				color[v] = 1 - 
			}
		}



	}



}


int main()
{
    int G[][V] = {
    	{0, 1, 0, 1},
	    {1, 0, 1, 0},
	    {0, 1, 0, 1},
	    {1, 0, 1, 0}
    };
 
    isBipartite(G, 0) ? cout << "Yes" : cout << "No";
    return 0;

	
	return 0;
}