#include <iostream>
using namespace std;

int main()
{

	string arr;
	cout<<"Enter the string: ";
	cin>>arr;
	int count=0;
	int length = arr.size();
	for (const char *i=arr.c_str() ; i < arr.c_str() + arr.size() ; ++i)
	{
		switch(*i)
		{

			case 'A':
			case 'a':
			case 'E':
			case 'e':
			case 'O':
			case 'o':
			case 'I':
			case 'i':
			case 'u':
			case 'U':
				count++;

		}
	}
	cout<<"No.of vowels are : "<<count<<endl;
	
	return 0;
}