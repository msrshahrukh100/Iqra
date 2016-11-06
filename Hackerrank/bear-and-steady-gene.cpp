#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string a;
	cin>>a;

	int count[26] = {0};
	int indices[8];
	int req_count = n/4;
	int min,max;
	bool found_min = false;
	for(int i=a.size()-1; i>=0; i--)
	{
		count[a[i]-'A']++;
		if(count[a[i]-'A'] > req_count && !found_min)
			min = i,found_min = true;
		if(count[a[i]-'A'] > req_count)
			max = i;
	}
	// cout<<"min: "<<min<<" max : "<<max<<endl;
	cout<<min-max+1<<endl;
	return 0;
}