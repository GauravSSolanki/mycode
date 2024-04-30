#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class node
{
public:
	int data;
	node *left;
	node *right;
	node(int val)
	{
		data = val;
		left = NULL;
		right = NULL;
	}
};

void inorder(node *root)
{
	if (root == NULL)
	{
		return;
	}
	inorder(root->left);
	cout << root->data << " ";
	inorder(root->right);
}

void preorder(node *root)
{
	if (root == NULL)
	{
		return;
	}
	cout << root->data << " ";
	preorder(root->left);
	preorder(root->right);
}

// node *insert(node *root, int val)
// {
// 	if (root == NULL)
// 	{
// 		return new node(val);
// 	}
// 	if (root->data > val)
// 	{
// 		root->left = insert(root->left, val);
// 	}
// 	else
// 	{
// 		root->right = insert(root->right, val);
// 	}
// 	return root;
// }

// same as insert only for practice

node *InserT(node *root, int val)
{
	if (root == NULL)
	{
		node *n = new node(val);
		root = n;
		return root;
	}
	if (root->data < val)
	{
		root->right = InserT(root->right, val);
	}
	if (root->data > val)
	{
		root->left = InserT(root->left, val);
	}

	return root;
}


bool search(node *root, int val)
{
	if (root == NULL)
	{
		cout << "key is not availbe";
		return false;
	}
	if (root->data == val)
	{
		cout << " key is matched " << val;
		return true;
	}
	else if (root->data > val)
	{
		search(root->left, val);
	}
	else
	{
		search(root->right, val);
	}
}

void LevelOrder(node *root)
{
	if (root == NULL)
	{
		return;
	}
	queue<node *> q;
	q.push(root);
	q.push(NULL);
	while (!q.empty())
	{
		node *temp = q.front();
		q.pop();
		if (temp != NULL)
		{
			cout << temp->data << " ";
			if (temp->left)
			{
				q.push(temp->left);
			}
			if (temp->right)
			{
				q.push(temp->right);
			}
		}
		else if (!q.empty())
		{
			cout << endl;
			q.push(NULL);
		}
	}
}

bool validBST(node* root)
{
	if(root==NULL )
	{ return true;}
	node* temp = root;
	if(temp->data && temp->left->data < temp->data && temp->left->data)
	{
		return validBST(temp->left);
	}
	if(temp->data && temp->right->data > temp->data && temp->right->data)
	{
		return validBST(temp->right);
	}
	return false;
}

int main()
{
	char bst[9] = {11,2,3,5,6,7,8,12,1};
	node *root = NULL;
	for (int i = 0; i < 9; i++)
	{
		root = InserT(root, bst[i]);
	}
	inorder(root);
	cout << endl;
	preorder(root);
	cout << endl;
	LevelOrder(root);
	cout << endl;
	search(root, 9);
	// if(validBST(root))
	// cout<<"Valid bst "<<endl;
	// else
	// cout<<"Not Valid bst "<<endl;
}