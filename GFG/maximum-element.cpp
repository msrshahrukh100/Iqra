#include <cmath>
#include <limits.h>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;


int main() {

	vector <long long> s;
	vector <long long> maximums;
	long long n;
	cin>>n;
	long long max = 0;

	while(n--)
	{
		long long temp;
		cin>>temp;
		switch(temp)
		{
			case 1 :
				long long insert;
				cin>>insert;
				if(insert > max)
				{
					max = insert;
					maximums.push_back(max);
				}
				s.push_back(insert);
				
				break;
			case 2:
				if(s.back() == max && !maximums.empty())
				{
					maximums.pop_back();
					if(maximums.empty())
						max = 0;
					else
						max = maximums.back();
				}
				s.pop_back();
				

				break;
			case 3:
				cout<<max<<endl;
				break;
		}
	}

    return 0;
}
