// Dynamic Programming | Set 5 (Edit Distance)

#include <iostream>
using namespace std;
int min(int a, int b , int c)
{
	return min(min(a,b) , c);
}
int findnumberopt(string a, string b,int l1, int l2)
{
	if (l1 == 0)
		return l2;
	else if (l2 == 0)
		return l1;

	else if(a[l1-1] == b[l2-1])
		return findnumberopt(a,b,l1-1,l2-1);

	else 
		return 1 + min(findnumberopt(a,b,l1-1,l2) , findnumberopt(a,b,l1,l2-1) , findnumberopt(a,b,l1-1,l2-1) );


}
int main()
{
	string a,b;
	cin>>a>>b;
	cout<<"The minimum number of operations required is "<<findnumberopt(a,b,a.length(),b.length())<<endl;
	
	return 0;
}