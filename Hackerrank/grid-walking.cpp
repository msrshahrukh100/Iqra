#include <iostream>
int n;
using namespace std;


long long grid(int current_position[],int dimensions[],int no_of_steps)
{
	if (no_of_steps == 0)
		return 1;
	// for(int i=0; i<n; i++)
	// 	if(current_position[i] <= 0 || current_position[i] > dimensions[i] || no_of_steps == 0)
	// 		return 0;

	long long sum = 0;

	for(int i=0; i<n; i++)
	{
		if(current_position[i] < dimensions[i])
		{		
			current_position[i] += 1;
			sum += (grid(current_position,dimensions,no_of_steps-1))%1000000007;
			current_position[i] -= 1;
		}
		if(current_position[i] > 1)
		{
			current_position[i] -= 1;
			sum += (grid(current_position,dimensions,no_of_steps-1))%1000000007;
			current_position[i] += 1;
		}
	}

	// for(int i=0; i<n; i++)
	// {
	// 	current_position[i] -= 1;
	// 	sum += (1 + grid(current_position,dimensions,no_of_steps-1))%1000000007;
	// 	current_position[i] += 1;
	// }

	return sum;


}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int m;
		cin>>n>>m;
		int x[n],d[n];
		for(int i=0; i<n; i++)
			cin>>x[i];

		for(int i=0; i<n; i++)
			cin>>d[i];

		cout<<grid(x,d,m)<<endl;


	}
	return 0;
}