#include <iostream>
#include <string.h>
using namespace std;
char expr[400];
char stack[400];
int t,ind=0;

void push(char a)
{
	stack[ind] = a;
	ind++;
} 

char pop()
{
	--ind;
	return stack[ind];
}

int main()
{
	cin>>t;
	while(t--)
	{
		cin>>expr;
		int l = strlen(expr);
		for (int i=0; i<l ; i++)
		{
			if (expr[i] == '+' || expr[i] == '-' || expr[i] == '*' || expr[i] == '/' || expr[i] == '^')
				push(expr[i]);

			else if(expr[i] == ')' )
				cout<<pop(); 

			else if(expr[i] == '(' )
				{}

			else 
				cout<<expr[i];
		} 
		cout<<endl;
	}
	
	return 0;
}