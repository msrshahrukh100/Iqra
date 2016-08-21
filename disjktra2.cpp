#include <iostream>
#include <limits.h>
#define V 9

using namespace std;

int mindistance(int dist[],bool sptset[])
{
	int min = INT_MAX,min_index;

	for(int i=0; i<V; i++)
		if(sptset[i] == false && dist[i] <= min)
			min = dist[i] , min_index = i;

	return min_index;
}

void dijkstra(int graph[V][V],int source)
{
	int dist[V];
	bool sptset[V];

	for(int i=0; i<V; i++)
	{
		dist[i] = INT_MAX;sptset[i] = false;
 	}

 	dist[source] = 0;

 	for(int count=0; count<V-1; count++)
 	{
 		int u = mindistance(dist,sptset);

 		sptset[u] = true;

 		for(int v=0; v<V; v++)
 			if(!sptset[v] && graph[u][v] && dist[u] != INT_MAX && dist[u]+graph[u][v] < dist[v])
 				dist[v] = dist[u] + graph[u][v];

 	}

 	for(int i=0; i<V; i++)
 		cout<<i<<" --- "<<dist[i]<<endl;

}


int main()
{
	int graph[V][V] = {{0, 4, 0, 0, 0, 0, 0, 8, 0},
                      {4, 0, 8, 0, 0, 0, 0, 11, 0},
                      {0, 8, 0, 7, 0, 4, 0, 0, 2},
                      {0, 0, 7, 0, 9, 14, 0, 0, 0},
                      {0, 0, 0, 9, 0, 10, 0, 0, 0},
                      {0, 0, 4, 0, 10, 0, 2, 0, 0},
                      {0, 0, 0, 14, 0, 2, 0, 1, 6},
                      {8, 11, 0, 0, 0, 0, 1, 0, 7},
                      {0, 0, 2, 0, 0, 0, 6, 7, 0}
                     };
 
    dijkstra(graph, 0);
	
	return 0;
}