#include <iostream>
#include <math.h>
using namespace std;

int answer[10000000];
int k = 0;

int numberofdivisors(int a)
{
	int count = 2;
	if (a == 1)
		return 1;
	else
	{
		for(int i=2; i<a; i++)
			if((a % i) == 0)
				count ++;
	}

	return count;
}

void findanswer()
{
	int highestsofar = 0;
	for(int i = 1; i<= 10000000; i++)
	{
		int t = numberofdivisors(i);
		if(t > highestsofar)
		{
			highestsofar = t;
			cout<<i<<endl;
		}
		
	}

}

int main()
{
	// findanswer();
   int a[]  =      {1,  
         2,
         4,
         6, 
        12, 
        24, 
        36, 
        48, 
        60,  
       120,  
       180,  
       240,  
       360,  
       720,  
       840,   
      1260,   
      1680,   
      2520,   
      5040,   
      7560,   
     10080,   
     15120,   
     20160,   
     25200,   
     27720,    
     45360,   
     50400,   
     55440,    
     83160,    
    110880,    
    166320,    
    221760,    
    277200,    
    332640,    
    498960,    
    554400,    
    665280,    
    720720,     
   1081080,     
   1441440,     
   2162160,     
   2882880,     
   3603600,     
   4324320,     
   6486480,     
   7207200,     
   8648640,     
  10810800,     
  14414400,     
  17297280,     
  21621600,     
  32432400,     
  36756720,      
  43243200,     
  61261200, 
  73513440, 
 110270160, 
 122522400, 
 147026880, 
 183783600 };	// cout<<answer[0];
	// cout<<numberofdivisors(6);
	int q;
	cin>>q;

	int queries[q];
	for(int i=0; i<q; i++)
		cin>>queries[i];

	for(int j=0; j<q; j++)
	{
		for(int i=0; i<60; i++)
		{
			if(a[i] >= queries[j])
			{
				cout<<a[i]<<endl;
				break;
			}
		}	
	}

	return 0;
}