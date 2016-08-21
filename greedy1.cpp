#include <iostream>
#include <utility>
using namespace std;
// void swap(int *a, int *b)
// {
// 	int *temp ;
// 	temp = a;
// 	a = b;
// 	b = temp;
	
// }

int main()
{
	int start[]  =  {1, 3, 0, 5, 8, 5};
	int finish[] =  {2, 4, 6, 7, 9, 9};
	int l = sizeof(start)/sizeof(int);
	int jobs[l+1][2];
	for (int i=0; i<l; i++)
	{
		jobs[i][0] = start[i];
		jobs[i][1] = finish[i]; 
	}

	// swap(jobs[0],jobs[3]);
	cout<<"--------------------------"<<endl;

	for(int i=0; i<l-1; i++)
	{
		int xchanges = 0;
		for(int j=0; j<l-i-1; j++)
		{
			if(jobs[j+1][1] < jobs[j][1])
			{
				xchanges++;
				swap(jobs[j+1],jobs[j]);
			}
		}
		if(xchanges == 0)
			break;
	}
	cout<<"After sorting: "<<endl;

	for (int i=0; i<l; i++)
	{
		cout<<jobs[i][0]<<" ";
		cout<<jobs[i][1] <<endl; 
	}

	int current = jobs[0][1];
	cout<<0<<endl;
	for(int i=0; i<l; i++)
	{
		if(current <= jobs[i][0])
		{
			cout<<i<<endl;
			current = jobs[i][1];
		}
	}


		
	return 0;
}