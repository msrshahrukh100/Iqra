#include <iostream>
#include <queue>

using namespace std;


struct node
{
	int dist,vertex;
};

int solve(int *vertexposition)
{

	bool visited[102];
	for(int i=1; i<=100; i++)
		visited[i] = false;
	
	queue<node> q;

	node s = {0,1};
	q.push(s);

	node a;
	int safe = 0;

	while(!q.empty())
	{
		a = q.front();

		q.pop();
		int v = a.vertex;
		visited[v] = true;

		if(v == 100)
		{
			safe = 1;
			break;
		}

		for(int i = (v+1); i<=(v+6); i++)
		{
			if(!visited[i])
			{
				node temp;
				temp.dist = (a.dist + 1);
				visited[i] = true;

				if(vertexposition[i] == -1)
					temp.vertex = i;
				else
					temp.vertex = vertexposition[i];

				q.push(temp);
			}

		}
	}
	if(safe == 1)
		return a.dist;
	else
		return -1;
}

int main()
{

	int t;
	cin>>t;
	while(t--)
	{
		int vertexposition[102];
		for(int i=1; i<= 100; i++)
			vertexposition[i] = -1;

		for(int i=0; i<2; i++)
		{
			int n;
			cin>>n;
			while(n--)
			{
				int a,b;
				cin>>a>>b;
				vertexposition[a] = b;
			}
		}

		cout<<solve(vertexposition)<<endl;

	}
	
	return 0;
}