#include <iostream>
#include <list>
#include <queue>
using namespace std;
class Graph
{
	int N;
	list <int> *adj;
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

	void BFS(int s)
	{
		bool visited[N];
		queue<int> q;
		for(int i=0; i<N; i++)
			visited[i] = false;

		visited[s] = true;
		q.push(s);

		while(!q.empty())
		{
			int temp = q.front();
			cout<<temp<<" ";
			q.pop();
			list <int> :: iterator i;
			for(i = adj[temp].begin(); i != adj[temp].end(); i++)
			{
				if(!visited[*i])
				{
					visited[*i] = true;
					q.push(*i);
				}

			}
		}
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
 
    cout << "Following is Breadth First Traversal (starting from vertex 2) \n";
    g.BFS(2);
 
	
	return 0;
}