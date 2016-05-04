// OOPS LAB ASSSIGNMENT 
// SUBMITTED BY
// Mohammad Shahrukh    13BCS-0044

#include <iostream>
using namespace std;
void reverse(const char *a,int i)
{
	for (const char *j = a+i; j>=a ; j--)
		cout<<*j;
	cout<<endl;
}
int main()
{
	string arr;
	cout<<"Enter the number: ";
	cin>>arr;
	cout<<"The reverse of the number is :";
	reverse(arr.c_str(),arr.size());
	
	return 0;
}