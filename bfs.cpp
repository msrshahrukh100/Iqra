#include <iostream>
#include <list>
using namespace std;

class Graph
{
	int V;
	list<int> *adj;
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
	void bfs(int s)
	{
		bool visited[V];
		for(int i=0; i<V; i++)
			visited[i] = false;

		list<int> queue;
		visited[s] = true;
		queue.push_back(s);

		while(!queue.empty())
		{
			s = queue.front();
			cout<<s<<" ";
			queue.pop_front();

			list <int> :: iterator i;

			for(i = adj[s].begin(); i!=adj[s].end(); i++)
			{
				if(!visited[*i])
				{
					visited[*i] = true;
					queue.push_back(*i);
				}
			}
		}

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
 
    cout << "Following is Breadth First Traversal (starting from vertex 2) \n";
    g.bfs(2);
 
	
	return 0;
}