#include <iostream>
#include <limits.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int answer = 0;
	int max = INT_MIN;
	for(int i=0; i<n; i++)
	{
		int a;
		cin>>a;

		if(a > max)
		{
			answer = 1;
			max = a;
		}

		else if(a == max)
			answer ++;
		
	}

	cout<<answer<<endl;
	return 0;
}