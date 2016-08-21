#include <iostream>
#include <list>
using namespace std;

class Graph
{
	int V;
	list<int> *adj;
	void dfsutil(int v,bool visited[])
	{
		visited[v] = true;
		cout<<v<<" ";
		list<int> :: iterator i;
		for(i=adj[v].begin(); i != adj[v].end(); i++)
		{
			if(!visited[*i])
				dfsutil(*i,visited);
		}


	}

public:
	Graph(int v)
	{
		V = v;
		adj = new list<int> [v]; 
	}
	void addedge(int v,int w)
	{
		adj[v].push_back(w);
	}

	void dfs()
	{
		bool visited[V];
		for(int i=0; i<V; i++)
			visited[i] = false;

		for(int i=0; i<V; i++)
			if(!visited[i])
				dfsutil(i,visited); 

	}

};


int main()
{
	Graph g(4);
    g.addedge(0, 1);
    g.addedge(0, 2);
    g.addedge(1, 2);
    g.addedge(2, 0);
    g.addedge(2, 3);
    g.addedge(3, 3);
 
    cout << "Following is Depth First Traversal (starting from vertex 2) \n";
    g.dfs();
 
	
	return 0;
}