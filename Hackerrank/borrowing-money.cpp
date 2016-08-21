#include <iostream>
#include <limits.h>
using namespace std;
int c[34];
int n,m;
bool sptset[34];

int maxdistance(int dist[])
{
	int max = INT_MIN,max_index;
	for(int i=0; i<n; i++)
		if(dist[i] > max && !sptset[i])
		{
			max_index = i;
			max = dist[i];
		}

	return max_index;

}
int findcost(int graph[34][34], int src)
{
	int dist[n];
	for(int i=0; i<n; i++)
	{
		dist[i] = INT_MIN;
		sptset[i] = false;
	}

	dist[src] = c[src];
	int next = 0;
	for(int count=0; count<n; count++)
	{
		int u = maxdistance(dist);
		sptset[u] = true;

		for(int v=0; v<n; v++)
		{
			if(next == 1)
			{
				next = 0;
				cout<<"next = 1"<<endl;
				dist[v] = c[v];
			}

			else if(!sptset[v] && graph[u][v] && dist[u] != INT_MIN && next == 0)
			{
				next = 1;
				cout<<"next = 0"<<endl;
				dist[v] = 0;
			}

		}
	}

	for(int i=0; i<n; i++)
		cout<<dist[i]<<endl;

	cout<<INT_MIN;

}

int main()
{
	cin>>n>>m;
	for(int i=0; i<n; i++)
		cin>>c[i];

	int graph[34][34] = {0};

	for(int i=0; i<m; i++)
	{
		int a,b;
		cin>>a>>b;
		graph[a-1][b-1] = 1;
	}

	findcost(graph,0);

	
	return 0;
}