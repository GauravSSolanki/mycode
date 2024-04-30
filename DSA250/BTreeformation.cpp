#include <iostream>
#include <algorithm>
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

node *BuildTree(node *root)
{
    cout << "Enter Data: " << endl;
    int d;
    cin >> d;
    root = new node(d);
    if (d == -1)
    {
        return NULL;
    }
    cout << "Left Child of " << d << endl;
    root->left = BuildTree(root->left);
    cout << "Right Child of " << d << endl;
    root->right = BuildTree(root->right);

    return root;
}

void Preorder(node *&root)
{
    if (!root == NULL)
    {
        cout << root->data << " ";
        Preorder(root->left);
        Preorder(root->right);
    }
    return;
}

void inorder(node *&root)
{
    if (!root == NULL)
    {

        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
    return;
}

void postorder(node *&root)
{
    if (!root == NULL)
    {

        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }
    return;
}

void LinearLevelorder(node *root)
{
    queue<node *> q;
    q.push(root);

    while (!q.empty())
    {
        node *temp = q.front();
        cout << temp->data << " ";
        q.pop();

        if (temp->left)
        {
            q.push(temp->left);
        }
        if (temp->right)
        {
            q.push(temp->right);
        }
    }
}

void LevelOrder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<node *> q;
    q.push(root); // 200
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

int main()
{
    node *root = NULL;
    root = BuildTree(root);
    cout << "Preorder traversal " << endl;
    Preorder(root);
    cout << "Inorder traversal " << endl;
    inorder(root);
    cout << "postorder traversal " << endl;
    postorder(root);
    cout << "LevelOrder traversal " << endl;
    LevelOrder(root);
      cout <<"LinearLevelorder traversal " << endl;
    LinearLevelorder(root);
}