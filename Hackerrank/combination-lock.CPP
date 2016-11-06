#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int mod(int a)
{
	if(a>=0)
		return a;
	return -1*a;
}
int main() {
	int a[5];
	int b[5];

	for(int i=0; i<5; i++)
		cin>>a[i];
	for(int i=0; i<5; i++)
		cin>>b[i];

	int answer = 0;
	for(int i=0; i<5; i++)
	{
		if(a[i] == b[i])
			continue;
		else
		{
			answer += min(mod(a[i]-b[i]) , 10 - mod(a[i]-b[i]));
		}
	}
	cout<<answer<<endl;

    return 0;
}
