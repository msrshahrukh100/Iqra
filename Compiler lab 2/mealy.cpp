#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	char input[100][100];
	FILE *p;
	p = fopen("mealy.txt","r");
	int i=0,j=0;
	char ch;
	while((ch = fgetc(p)) != EOF)
	{
		if(ch == '\n')
		{
			i++;
			j = 0;
		}
		else
		{
			if(ch != ' ')
			{
				input[i][j] = ch;
				j++;
			}
		}
	}
	string str;
	cout<<"Enter the string whose output you want : ";
	cin>>str;
	cout<<"The output is: ";
	// states/output [space] states/output is considered
	char currentstate = '0';
	for(int i=0; i<str.size(); i++)
	{
		if(currentstate == '_')
		{
			cout<<"Invalid input, ERROR!!"<<endl;
			break;
		}
		cout<<input[currentstate-'0'][(str[i]-'0')*3 + 2];
		currentstate = input[currentstate-'0'][3*(str[i]-'0')];
	}
	cout<<endl;
	return 0;
}