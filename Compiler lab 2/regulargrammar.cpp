#include <iostream>
using namespace std;
int main()
{
	FILE *p;
	p = fopen("regulargrammar.txt","r");
	char ch;
	while((ch = fgetc(p)) != EOF)
		cout<<ch;
	
	return 0;
}