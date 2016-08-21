#include <iostream>
using namespace std;

class Graph
{
	int v;
	list<int> *adj;
public:
	Graph(int ver)
	{
		v = ver;
		adj = new list<int> [v];
	}
	void addedge(int v,int w)
	{
		adj[v].push_back(w);
	}
};


int main()
{
	
	return 0;
}