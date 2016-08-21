#include <iostream>
#include <queue>
using namespace std;
int main()
{
	char a[5000],b[5000],newa[5000];

	cin>>a>>b;
	int la,lb;
	int i=0,j=0;

	while(a[i++] != '\0')
		la++;
	while(b[j++] != '\0')
		lb++;

	queue<int> q;

	for(int i=0; i<la; i++)
		q.push(a[i]);
	
	i=0;
	j=0;
	while(! q.empty())
	{
		newa[i] = '@';
		newa[i+1] = q.front();
		i = i+2;
		q.pop();
	}
	newa[i1] = '@';


	cout<<newa;
	// for(int )
	
	return 0;
}