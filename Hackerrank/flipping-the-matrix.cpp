#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

	int q;
	while(q--)
	{
		int n;
		cin>>n;
		int size = 2*n;
		int a[size][size];
		bool taken[size][size];
		for(int i=0; i<size; i++)
			for(int j=0; j<size; j++)
			{
				cin>>a[i][j];
				taken[i][j] = false;
			}

		for(int i=0; i<size; i++)
		{
			for(j=0; j<=i; j++)
			{

			}	
		}

	}
    return 0;
}
