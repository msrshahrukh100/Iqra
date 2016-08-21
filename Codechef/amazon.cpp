#include <iostream>
using namespace std;
int main()
 {
 	int n;
 	cin>>n;
 	int ans[1000000],l;
	int start = 1,k=1;
 	for(int i=0; i<n; i++)
 	{
 		cin>>l;
 		for(int j = start;j < start+l; j++)
 			ans[j] = k;
 		k++;
 		start += l;
 	}


 	int q;
 	cin>>q;
 
 	while(q--)
 	{
 		int t,i;
 		cin>>t;
 		cout<<ans[t]<<endl;
 	}
 	
 	return 0;
 } 