#include <iostream>
using namespace std;
inline int add(int a,int b)
{
	return a+b;
}
inline int sub(int a,int b)
{
	return a-b;
}
inline int mul(int a,int b)
{
	return a*b;
}
inline int div(int a,int b)
{
	return a/b;
}
inline int mod(int a,int b)
{
	return a%b;
}

int main()
{
	string arr;
	int result;
	cout<<"Enter the expression: ";
	cin>>arr;
	result = arr[0] - '0';
	for (const char *i = arr.c_str()+1; i<=arr.c_str()+arr.size(); ++i)
	{
		if (*(i+1) == '\0') break;
		int j = *(i+1) - '0';
		switch(*i)
		{
		case '+':
			result = add(result,j);
			break;
		case '-':
			result = sub(result,j);
			break;
		case '/':
			result = div(result,j);
			break;
		case '%':
			result = mod(result,j);
			break;
		case '*':
			result = mul(result,j);
			break;
		}
	}
	cout<<"The result is :"<<result<<endl;

	return 0;
}