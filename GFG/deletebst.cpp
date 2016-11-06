#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node *left,*right;
};

Node *Insert(Node *root, int data)
{
	Node *temp = new Node;
	temp -> data = data;
	temp -> left = temp -> right = NULL;

	if (root == NULL)
		return temp;

	else
	{
		Node *par, *p = root;

		while(p != NULL)
		{
			if(p -> data > data)
			{
				par = p;
				p = p -> left;
			}

			else if(p -> data < data)
			{
				par = p;
				p = p -> right;
			}

			else
			{
				cout<<"Duplicate entry not allowed! "<<endl;
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
		cout<<root -> data<<" ";
		Inorder(root -> right);
	}
}

Node *find_inorder_successor(Node *root)
{
	Node *par = root;
	Node *p = root;

	while(p != NULL)
	{
		par = p;
		p = p -> left;
	}
	return par;
}


void Delete(Node *root,int data,Node *par)
{
	if(root == NULL)
		return ;
	if(root -> data > data)
	{
		par = root;
		Delete(root -> left,data,par);
	}
	else if(root -> data < data)
	{
		par = root;
		Delete(root -> right,data,par);
	}
	else
	{
		if(root -> left == NULL && root -> right == NULL)
		{
			if(par -> left == root)
				par -> left = NULL;
			else
				par -> right = NULL;

			delete root;
			return ;
		}

		else if(root -> left == NULL && root -> right != NULL)
		{
			if(par -> left == root)
				par -> left = root -> right;
			else
				par -> right = root -> right;

			delete root;
		}

		else if(root -> right == NULL && root -> left != NULL)
		{
			if(par -> left == root)
				par -> left = root -> left;
			else
				par -> right = root -> left;

			delete root;
		}
		else
		{
			// cout<<"i am here\n";
			Node * temp = find_inorder_successor(root -> right);
			// cout<<temp->data<<endl;
			root -> data = temp -> data;
			Delete(root -> right, temp -> data, root);
		}
	}
}

int main()
{

	Node *root = NULL,*par = NULL;

	root = Insert(root,50);
	root = Insert(root,30);
	root = Insert(root,20);
	root = Insert(root,40);
	root = Insert(root,70);
	root = Insert(root,60);
	root = Insert(root,80);

	Inorder(root);
	Delete(root,20,par);
	cout<<endl;

	Inorder(root);
	cout<<endl;

	Delete(root,30,par);
	cout<<endl;

	Inorder(root);
	cout<<endl;

	Delete(root,50,par);
	cout<<endl;

	Inorder(root);
	cout<<endl;

	Delete(root,60,par);
	cout<<endl;

	Inorder(root);
	cout<<endl;
	
	return 0;
}
