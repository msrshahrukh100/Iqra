#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	queue <int> q;
	while(t--)
	{
		int n;
		cin>>n;
		switch(n)
		{
			case 1:
				int x;
				cin>>x;
				q.push(x);
				break;
			case 2:
				q.pop();
				break;
			case 3:
				cout<<q.front()<<endl;
				break;

		}
	}
	return 0;
}