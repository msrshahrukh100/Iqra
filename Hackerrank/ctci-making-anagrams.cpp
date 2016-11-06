#include <iostream>
using namespace std;
int mod(int a)
{
	if (a>0)
		return a;
	return -1 * a;
}
int main(int argc, char const *argv[])
{
	
	string a,b;
	int af[26]={0},bf[26]={0};

	cin>>a>>b;

	for(int i=0; i<a.size(); i++)
		af[a[i]-'a']++;
	for(int i=0; i<b.size(); i++)
		bf[b[i]-'a']++;

	int answer = 0;

	for(int i=0; i<26; i++)
		answer += mod(af[i] - bf[i]);

	cout<<answer<<endl;
	return 0;
}