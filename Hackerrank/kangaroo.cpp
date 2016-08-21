#include <iostream>
using namespace std;
int main()
{
	int x1,v1,x2,v2;
	cin>>x1>>v1>>x2>>v2;
	if((x1<x2 && v2>=v1) || (x2<x1 && v1>=v2))
		cout<<"NO"<<endl;
	else
	{
		int a = min(x1,x2);
		int b = max(x1,x2);

			int i=1,flag=0;
			while((a<b))
			{
				a += v1*i;
				b += v2*i;
				if(a == b)
				{
					cout<<"YES"<<endl;
					flag = 1;
					break;
				}
			} 
			if(flag == 0)
				cout<<"NO"<<endl;
		
	}
	
	return 0;
}