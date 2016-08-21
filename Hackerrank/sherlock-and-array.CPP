#include <iostream>
#include <vector>
using namespace std;
int main()

{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> v(n);
		vector<int> sum_vector;
		int sum = 0;

		for(int i=0; i<n; i++)
		{
			cin>>v[i];
			sum += v[i];
			sum_vector.push_back(sum);
		}

		int flag = 0;

		for(int i=0; i<n; i++)
		{
			if(i == 0 && sum_vector[n-1] == 0)
			{
				flag = 1;
				break;
			}
			else if(i == n-1 && sum_vector[n-2] == 0)
			{
				flag = 1;
				break;
			}
			else 
			{
				if(sum_vector[i-1] == (sum_vector[n-1] - sum_vector[i]))
				{
					flag = 1;
					break;
				}
			}

		}

		if(flag == 1)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	
	return 0;
}