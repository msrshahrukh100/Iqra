#include <iostream>
#include <limits.h>
using namespace std;

struct Node
{
	int data;
	Node *left,*right;
};

Node *Create(int data)
{
	Node *temp = new Node;
	temp -> data = data;
	temp -> left = temp -> right = NULL;
	return temp;
}

bool is_bst(Node *root,int min,int max)
{
	if(root == NULL)
		return true;
	if(root -> data > max || root -> data < min)
		return false;

	return is_bst(root -> left,min,root -> data -1)  && is_bst(root -> right,root -> data +1 , max);

}

int main()
{
	Node *root = Create(4);
	root->left        = Create(2);
	root->right       = Create(5);
	root->left->left  = Create(1);
	root->left->right = Create(3); 
	if(is_bst(root,INT_MIN,INT_MAX))
	    cout<<"Is BST";
	else
	    cout<<"Not a BST";
     
 
	
	return 0;
}