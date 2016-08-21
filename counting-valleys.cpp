#include <iostream>
using namespace std;
int main()
{
	int effect =0;
	int n;
	cin>>n;
	int flag = 1,answer=0;
	for(int i=0; i<n; i++)
	{
		char a;
		cin>>a;
		if(a == 'U')
			effect++;
		else if(a == 'D')
			effect-- ;

		if(effect < 0  && flag == 1)
		{
			answer ++;
			flag = 0;
		}
		else if(effect >= 0)
			flag = 1;
	}
	cout<<answer<<endl; 
	return 0;
}