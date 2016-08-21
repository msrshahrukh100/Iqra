#include <iostream>
#include <limits.h>
using namespace std;
 
int findmin(int *distance,bool *sptset,int n)
{
	int min = INT_MAX,minindex;
	for(int i=1; i<=n; i++)
		if(distance[i] < min && sptset[i] == false)
			min = distance[i],minindex = i;

	return minindex;
}

void solve(int **graph,int source,int n)
{
	// cout<<graph[1][1];

	// for(int i=1; i<=n; i++)
	// {
	// 	for(int j=1; j<=n; j++)
	// 		cout<<graph[i][j]<<" ";
	// 	cout<<endl;
	// }

	int distance[n+1];
	bool sptset[n+1];

	for(int i=1; i<=n; i++)
		distance[i] = INT_MAX, sptset[i] = false;

	distance[source] = 0;

	for(int count = 1; count<n-1; count++)
	{
		int u = findmin(distance,sptset,n);
		sptset[u] = true;

		for(int v = 1; v<=n; v++)
			if(graph[u][v] && (distance[v] > distance[u] + graph[u][v]) && distance[u] != INT_MAX && !sptset[v])
				distance[v] = distance[u] + graph[u][v];
	}

	for(int i = 1; i<=n; i++)
		if (i != source)
		{
			if(distance[i] == INT_MAX)
				cout<<"-1 ";
			else
				cout<<distance[i]<<" ";
		}

	cout<<endl;

}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int **graph;
		graph = new int *[n+1];

		for(int i=1; i<=n; i++)
			graph[i] = new int[n+1];

		for(int i=1; i<=n; i++)
			for(int j=1; j<=n; j++)
				graph[i][j] = 0;

		for(int i=0; i<m; i++)
		{
			int u,v,weight;
			cin>>u>>v>>weight;
			if(graph[u][v] == 0)
			{
				graph[u][v] = weight;
				graph[v][u] = weight;	
			}
			else
			{
				if(graph[u][v] > weight)
				{
					graph[u][v] = weight;
					graph[v][u] = weight;	
				}
			}

		}
		int source;
		cin>>source;
		solve(graph,source,n);


	}
	
	return 0;
}