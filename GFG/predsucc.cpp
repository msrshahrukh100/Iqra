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

void find_suc_pred(int data,Node *root,Node * &pre, Node * &suc)
{
	if(root == NULL)
		return ;
	if(root -> data == data)
	{
		if(root -> left != NULL)
		{
			Node *p = root;
			while(p -> right != NULL)
				p = p -> right;
			pre = p; 
		}
		if(root -> right != NULL)
		{
			Node *p = root;
			while(p -> left != NULL)
				p = p -> left;
			suc = p;
		}
	}
	else if(root -> data > data)
	{
		suc = root;
		find_suc_pred(data,root -> left,pre,suc);
	}

	else if(root -> data < data)
	{
		pre = root;
		find_suc_pred(data,root -> right,pre,suc);
	}

}

int main()
{
	Node * root = NULL;

	root = Insert(30,root);
	root = Insert(20,root);
	root = Insert(40,root);
	root = Insert(70,root);
	root = Insert(60,root);
	root = Insert(80,root);

	Inorder(root);
	cout<<endl;

	Node * pre = NULL;
	Node * suc = NULL;
	find_suc_pred(65,root,pre,suc);
	cout<<pre->data<<endl;
	cout<<suc->data<<endl;
	
	return 0;
}