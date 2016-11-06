#include <iostream>
#include <list>
#include <queue>
using namespace std;

class Graph
{
	int N;
	list <int> *adj;
	int *distances;
public:
	Graph(int n)
	{
		this -> N = n;
		adj = new list<int> [N];
		distances = new int [N];

		for(int i=0; i<N; i++)
			distances[i] = -1;
	}

	void addedge(int u,int v)
	{
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	void solve(int s)
	{
		queue<int> q;
		bool visited[N];

		for(int i=0; i<N; i++)
			visited[i] = false;

		distances[s] = 0;
		int d;
		visited[s] = true;
		q.push(s);

		while(!q.empty())
		{
			int temp = q.front();

			list <int> :: iterator i;
			q.pop();
			d = distances[temp] + 6;
			for(i = adj[temp].begin(); i != adj[temp].end(); i++)
			{
				if(!visited[*i])
				{
					visited[*i] = true;
					q.push(*i);
					distances[*i] = d;
				}
			}

		}
		for(int i=0; i<N; i++)
			cout<<distances[i]<<" ";

		cout<<endl;
	}
};

int main(int argc, char const *argv[])
{
	int q;
	cin>>q;
	while(q--)
	{
		int n,e;
		cin>>n>>e;

		Graph *g = new Graph(n);
		for(int i=0; i<e; i++)
		{
			int a,b;
			cin>>a>>b;
			g -> addedge(a,b);
		}
		int s;
		cin>>s;

		g -> solve(s);

		delete g;
	}
	
	return 0;
}