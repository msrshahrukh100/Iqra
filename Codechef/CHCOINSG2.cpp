#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
using namespace std;
#define max 100007
int cmpfunc(const void *a, const void *b)
{
	return (*(int *)a - *(int *)b);
}
int main()
{
	// int p[max],prime_nos[max],k=0;
	// for(int i=0; i<max; i++)
	// 	p[i] = i+2;

	// for(int i=0; i<max; i++)
	// {
	// 	if(p[i] != -1)
	// 	{
	// 		for(int j=2*(p[i]-1);j<max; j+=p[i])
	// 			p[j] = -1;
	// 	}		
	// }

	// for(int i=0; i<max; i++)
	// 	if(p[i] != -1)
	// 		prime_nos[k++] = p[i];

	// for(int i=0; i<k; i++)
	// 	cout<<prime_nos[i]<<",";

	// cout<<"shahrukh";
	// int powers[2*max],l=0; 
	// for(int i=0 ; i<15 ; i++)
	// {
	// 	for(int j=1; j < 15 ; j++)
	// 	{
	// 		powers[l++] = pow(prime_nos[i], j) ;
	// 		if (powers[l-1] > 20000)
	// 			break;
	// 	}
	// } 

	// qsort(powers, l , sizeof(int), cmpfunc);
	
	// for(int i=0 ; i<l ; i++)
	// 	cout<<powers[i]<<",";
	int t;
int numbers[200] = {1,2,3,4,5,7,8,9,11,13,16,17,19,23,25,27,29,31,32,37,41,43,47,49,64,81,121,125,128,169,243,256,289,343,361,512,529,625,729,841,961,1024,1331,1369,1681,1849,2048,2187,2197,2209,2401,3125,4096,4913,6561,6859,8192,12167,14641,15625,16384,16807,19683,24389,28561,29791,50653,59049,68921,78125,79507,83521,103823,117649,130321,161051,279841};
		cin>>t;
		while(t--)
		{
			int n;
			cin>>n;
			int k,count=0,i=0;
			while (n > 0)
			{

			while (k > 0)
			{
				int k = n - numbers[i++];
			}
			count ++ ;
			if (k == 0)
				n = n - numbers[i-1];
			else
				n = n - numbers[i-2];
			}

			if (count %2 == 1)
				cout<<"Chef"<<endl;
			else
				cout<<"Misha"<<endl;

		}

	
	return 0;
}