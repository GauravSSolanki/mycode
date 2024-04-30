#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class node{
	public:
	int data ;
	node* left;
	node* right;
	node(int val)
	{ data=val;
	  left=NULL;
	  right=NULL;
	}
};
node* insert(node *root ,int val)
{
	if(root==NULL)
	{ 
	   return new node(val); 
	}
	if(root->data > val)
	{
	  root->left=insert(root->left,val);
    }
	else 
	{
		root->right=insert(root->right,val);
	}
	return root;
}
void inorder(node *root)
{
	if(root==NULL)
	{ 
	return;
	 }
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}
void preorder(node *root)
{
	if(root==NULL)
	{ 
	return;
	 }
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}
void postorder(node *root)
{
	if(root==NULL)
    { 
     	return;
	}
     postorder(root->left);
	 postorder(root->right);
	 cout<<root->data<<" ";
}

bool search(node* root ,int key)
{  
 if(root==NULL)
    {
	  return false;
    }
	if(root->data ==key)
	{
	   cout<<"key is :"<<key<<endl; 
		return true;
	}
	else if(root->data >key )
	{
		return search(root->left,key);
	}
	else{
		return search(root->right,key);
	}
}

int main()
{
	node* root=NULL;
	int arr[6]={5,1,3,4,2,7};
	for(int i=0;i<6;i++)
	{
		root=insert(root,arr[i]);
	}
	inorder(root);
	cout<<"IO" <<endl;
	preorder(root);
	cout<<"PRE"<<endl;
	postorder(root);
	cout<<"POST" <<endl;
	if(search(root,3))
	  cout<<"key found"<<endl;
	else
	  cout<<"key not found "<<endl;
}
	  
