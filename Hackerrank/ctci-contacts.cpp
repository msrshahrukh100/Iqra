#include <iostream>
#include <bits/stdc++.h>
#include <cassert>



using namespace std;

struct Node 
{
	int mark;
	Node *alphabets[26];
};

Node *get()
{
	Node *t = new Node;
	t -> mark = 0;
	for(int i=0; i<26; i++)
		t -> alphabets[i] = NULL;

	return t;
}

void insert (Node *root, string s)
{

	for(int i=0; i<s.size(); i++)
	{
		int now = s[i]-'a' ;
		if(root -> alphabets[now] == NULL)
			root -> alphabets[now] = get();

		root = root -> alphabets[now];
		root -> mark += 1;

	}
}

int main(int argc, char const *argv[])
{
	int q;
	cin>>q;
	Node *root = get();
	while(q--)
	{
		string a,b;
		cin>>a>>b;
        assert(b.length() >= 1 && b.length() <= 21);
		int no = 0;
        Node *temp = root;
		if(a == "add")
			insert(temp,b);
		else
		{
			for(int i=0; i<b.size(); i++)
			{
				if(temp -> alphabets[b[i]-'a'] == NULL)
				{
					cout<< 0 <<endl;
					no = 1;
					break;
				}
				temp = temp -> alphabets[b[i]-'a'];
			}
			if(no)
				continue;
			cout<< temp->mark <<endl;
		}
	}
	
	return 0;
}