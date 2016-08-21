#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    vector <int> v;
    int n,a;
    cin>>n;
    for(int i=0; i<n; i++)
    {
    	cin>>a;
    	v.push_back(a);
    } 
    cin>>a;
    while(a--)
    {
    	int q,i;
    	cin>>q;
    	if(binary_search(v.begin(), v.end(), q))
    	{
    		cout<<"Yes"<<" ";
	    	cout<<lower_bound(v.begin(), v.end(), q) - v.begin() + 1<<endl;
    	}
    	else
    	{    		
	    	cout<<"No"<<" ";
	    	cout<<upper_bound(v.begin(), v.end(), q) - v.begin() + 1<<endl;
    	}
    }

    return 0;
}
