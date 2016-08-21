#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct Node
{
	int number;
	int difference;
};

bool mycmp(const Node &a,const Node &b)
{
	return a.difference < b.difference;
}
int mod(int a)
{
	if(a >= 0)
		return a;
	return -1 * a;
}
void solve(int *a,int b, int k, int n)
{
	vector<Node> v(n);
	for(int i=0; i<n; i++)
	{
		v[i].number = a[i];
		v[i].difference = mod(a[i] - b);
	}

	sort(v.begin(),v.end(),mycmp);

	int flag = 0;
	for(int i=0; i<n; i++)
 		if(a[i] == b)
 			{
 				flag = 1;
 				break;
 			}


 	if(flag == 1)
 		k++;

	for(int i=0; i<k; i++)
		if(v[i].number != b)
		cout<<v[i].number<<endl;


}

int main()
 {
 	int n;
 	cin>>n;
 	int a[n];
 	for(int i=0; i<n; i++)
 		cin>>a[i];
 	int b,k;
 	cin>>b>>k;

 	solve(a,b,k,n);

 	
 	return 0;
 } 