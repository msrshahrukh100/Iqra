#include <iostream>
using namespace std;
int main()
{
	long long t;
	cin>>t;

	int count = 3;
	int initialcount = 3;

	// for(long long i = 1; i<=t; i++)
	// {
	// 	if (i == t)
	// 		cout<<count<<" ";
	// 	count--;

	// 	if(count == 0)
	// 	{
	// 		count = 2 * initialcount;
	// 		initialcount = count;
	// 	}
	// }
	// cout<<count+1<<endl;
	int rem;
	while(t > 0)
	{
		rem = t % count;
		t = t/count;
		count = 2 * count;
	}

	cout<<rem;
	return 0;
}