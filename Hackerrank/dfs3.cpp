#include <iostream>
#include <list>
using namespace std;

class Graph
{
	int N;
	list<int> *adj;
	void DFS_util(int s,bool visited[])
	{
		if(!visited[s])
		{
			cout<<s<<" ";
			visited[s] = true;	
			list<int> :: iterator i;

 			for(i = adj[s].begin(); i != adj[s].end(); i++)
 				DFS_util(*i,visited);
		}
	}
public:
	Graph(int n)
	{
		N = n;
		adj = new list<int> [n];
	}

	void addEdge(int v,int w)
	{
		adj[v].push_back(w);
	}

	void DFS()
	{
		bool visited[N];

		for(int i=0; i<N; i++)
			visited[i] = false;

		for(int i = 0; i<N; i++)
			if(!visited[i])
				DFS_util(i,visited);
	}

};

int main(int argc, char const *argv[])
{
	
	Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
 
    cout << "Following is Depth First Traversal\n";
    g.DFS();
 
	return 0;
}