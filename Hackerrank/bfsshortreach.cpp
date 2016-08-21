#include <iostream>
#include <list>
#include <queue>
using namespace std;


class Graph
{
	int N;
	list<int> *adj;
public:
	Graph(int n,int m)
	{
		N = n;
		adj = new list<int> [m+1000];
	}
	void addedge(int v,int w)
	{
		adj[v].push_back(w);
		adj[w].push_back(v);
	}

	void solve(int source)
	{
		// cout<<"testing"<<endl;
		bool visited[N];
		int distance[N];
		queue<int> q;
		for(int i=1; i<=N; i++)
			distance[i] = -1;

		visited[source] = true;
		distance[source] = 0;
		q.push(source);
		


		for(int i=1; i<=N; i++)
			visited[i] = false;

		while(!q.empty())
		{
			int u = q.front();
			q.pop();

			list<int> :: iterator i;
			for(i = adj[u].begin(); i != adj[u].end(); i++)
			{
				if(!visited[*i])
				{
					visited[*i] = true;

					distance[*i] = distance[u] + 6;
					q.push(*i);
				}
			}
		}

		for(int i=1; i<=N; i++)
			if (i != source)
			cout<<distance[i]<<" ";

		cout<<endl;
		adj->clear();

	}
};


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
	
		Graph *g = new Graph(n,m);
		while(m--)
		{
			int a,b;
			cin>>a>>b;
			g->addedge(a,b);
		}
		int source;
		cin>>source;
		g->solve(source);
		delete g;
	
	}
	
	return 0;
}