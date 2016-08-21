#include <iostream>
#include <cmath>
#define mod 1000000007 

using namespace std;

// long long power(int a,unsigned int b)
// {
// 	long long answer = 1;
// 	a = a % mod;

// 	while(b > 0)
// 	{
// 		if(b & 1)
// 			answer = (answer * a) % mod;

// 		b = b >> 1; 
// 		a = (a * a) % mod; 
// 	}

// 	return answer;
// }

long long power(int a,long long t)
{
	if(t == 0)
		return 1;
	long long temp = power(a,t/2) % mod;
	if ((t % 2 ) == 0)
		return temp * temp;
	else
		return a * temp * temp; 
}

int main()
{

	int a,b;
	long long t;
	cin>>a>>b>>t;

	cout<<power(int(0.5 * (a + b)) , t)<<endl;	
	// cout<<power(23,7)<<endl;	

	return 0;
}