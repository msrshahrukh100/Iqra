#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	string a;
	long long n;
	cin>>a>>n;
	long long ans = 0;
	if(a.size() >= n)
	{
		for(long long i=0; i<a.size(); i++)
			if(a[i] == 'a')
				ans++;
	}
	else
	{
		long long temp1 = 0,temp2=0;
		long long f = n / a.size();
		long long rem = n % a.size();
		for(long long i=0; i<a.size(); i++)
			if(a[i] == 'a')
				temp1++;

		for(long long i=0; i<rem; i++)
			if(a[i] == 'a')
				temp2++;

		ans = temp1 * f + temp2;


	}
	cout<<ans<<endl;
	return 0;
}