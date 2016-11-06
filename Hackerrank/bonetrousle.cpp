#include <iostream>
#include <string>
using namespace std;
string answer;
bool solve(long long n,long long k,long long b,string solution)
{
	if(k == 0 && (b != 0 || n != 0))
		return false;
	if(n < 0 || k < 0 || b < 0)
		return false;
	bool found = false;
	if(n == 0 && b == 0)
	{
		answer = solution;
		found = true;
	}

	if(found)
		return true;
	else	
		return solve(n-k,k-1,b-1,solution+to_string(k)+" ") || solve(n,k-1,b,solution);

}

int main()
{
	long long t;
	cin>>t;
	while(t--)
	{
		long long n,k,b;

		cin>>n>>k>>b;
		string sol = "";
		if(solve(n,k,b,sol))
		{
			for(int i=0; i<answer.size()-1; i++)
				cout<<answer[i];
			cout<<endl;
			
		}
		else
			cout<<"-1"<<endl;

	}
	return 0;
}