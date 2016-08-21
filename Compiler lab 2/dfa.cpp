#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;
int main()
{
	char ch;

	FILE *p;
	p = fopen("dfa.txt","r");
	char initialstate = fgetc(p);
	ch = fgetc(p);

	char finalstates[10];
	int count = 0;

	while((ch = fgetc(p)) != '\n')
	{
		if(ch != ' ')
			finalstates[count] = ch;
		else
			count ++;
	}
	int number_of_finalstates = count;

	vector<char> v[50];
	count = 0;
	while((ch = fgetc(p)) != EOF)
	{
		if(ch != ' '  && ch != '\n')
			v[count].push_back(ch);
		else if(ch == '\n')
			count ++;
	}

	string str;
	cout<<"Enter the string you wish to check: ";
	cin>>str;
	char currentstate = initialstate;
	int flag = 1;
	for(int i=0; i<str.size(); i++)
	{
		currentstate = v[currentstate-'0'][str[i]-'a'];
		if(currentstate == '_')
		{
			flag = 0;
			break;
		}
	}

	if(flag == 0)
		cout<<"This sentence is not accepted !"<<endl;
	else
	{
		flag = 0;
		for(int i=0; i<= number_of_finalstates; i++)
			if(finalstates[i] == currentstate)
			{
				flag = 1;
				break;
			}

		if(flag)
			cout<<"This sentence is accepted !"<<endl;
		else
			cout<<"This sentence is not accepted !"<<endl;
	}

	return 0;
}