#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node *left,*right;
};

Node *Insert(int data,Node *root)
{
	Node *temp = new Node;
	temp -> data = data;
	temp -> left = temp -> right = NULL;

	if(root == NULL)
		return temp;

	else
	{
		Node *p = root,*par;
		while(p != NULL)
		{
			if(data < p -> data)
			{
				par = p;
				p = p -> left;
			}
			else if(data > p -> data)
			{
				par = p;
				p = p -> right;
			}
			else
			{
				cout<<"Duplicate entry not possible"<<endl;
				return root;
			}
		}
		if(par -> data > data)
			par -> left = temp;
		else
			par -> right = temp;
	}

	return root;
}

void Inorder(Node *root)
{
	if(root != NULL)
	{
		Inorder(root -> left);
		cout<<root -> data <<" ";
		Inorder(root -> right);
	}
}

int main()
{
	Node * root = NULL;

	root = Insert(10,root);
	root = Insert(5,root);
	root = Insert(15,root);
	root = Insert(7,root);
	root = Insert(3,root);

	Inorder(root);
	cout<<endl;
	
	return 0;
}