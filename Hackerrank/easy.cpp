#include <cmath>
#include <cstdio>
#include <vector>
#include <utility>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    pair <string , long> contact[n+10];
    int t = n;
    while(n--)
    {
    	string a;
    	long n;
    	cin>>a>>n;
    	contact[n].first = a;
    	contact[n].second = n;
    }
    string query;
    cin>>query ;
    while(query.length())
    {
    	int flag = 0;
    	for(int i=0; i<n; i++)
    	{
    		if(contact[i].first == query)
    		{
    			cout <<contact[i].first<<"="<<contact[i].second<<endl;
    			flag = 1;
    		}
    		if(flag == 0)
    			cout<<"Not found"<<endl;
    	}
    }



    return 0;
}