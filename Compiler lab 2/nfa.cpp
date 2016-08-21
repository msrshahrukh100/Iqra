#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;
vector<vector<char> > v[10];
char finalstates[10];
char initialstate;
int number_of_finalstates;

bool isfinalstate(char cs)
{
	for(int i=0; i<=number_of_finalstates; i++)
		if(cs == finalstates[i])
			return true;

	return false;
}

bool check(string str,int i,char currentstate)
{
	if(currentstate == '_')
		return false;
	if(i == str.size())
	{
		return isfinalstate(currentstate);
	}
	bool accepts = false;
	char backtracking = currentstate;
	for(int k=0; k < v[currentstate-'0'][str[i]-'a'].size(); k++)
	{
		currentstate = v[currentstate-'0'][str[i]-'a'][k];
		accepts = accepts || check(str,i+1,currentstate);
		currentstate = backtracking;
	}
	return accepts;
}

int main()
{
	FILE *p;
	p = fopen("nfa.txt","r");
	char ch;

	initialstate = fgetc(p);
	ch = fgetc(p);

	int count = 0;

	while((ch = fgetc(p)) != '\n')
	{
		if(ch != ' ')
			finalstates[count] = ch;
		else
			count ++;
	}
	number_of_finalstates = count;


	int i=0;
	count = 0;
	vector<char> temp;
	while((ch = fgetc(p)) != EOF)
	{
		if(ch != ' ' && ch != '\n')
		{
			if(ch != ',')
				temp.push_back(ch);
		}
		else if(ch == ' ')
		{
			v[count].push_back(temp);
			temp.clear();
		}
		else if(ch == '\n')
		{
			v[count].push_back(temp);
			temp.clear();
			count++;
		}
	}

	string str;
	cout<<"Enter the string you wish to check: ";
	cin>>str;
	char currentstate = initialstate;
	if(check(str,0,currentstate) )
		cout<<"Yes this string is accepted !"<<endl;
	else
		cout<<"No this string is not accepted !"<<endl; 


	return 0;
}