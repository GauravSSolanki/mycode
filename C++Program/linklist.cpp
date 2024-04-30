#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
class node
{
public:
	int data;
	node *next;
	node(int val)
	{
		this->data = val;
		this->next = NULL; 
	}
};

void dltAtTail(node *&head)
{
	if (head == NULL)
	{
		cout << "List is empty" << endl;
	}
	else
	{
		node *ptr = NULL;
		node *temp = head;
		while (temp->next != NULL)
		{
			ptr = temp;
			temp = temp->next;
		}
		ptr->next = NULL;
		free(temp);
	}
}

void dltAthead(node *&head)
{
	node *temp;
	temp = head;
	head = head->next;
	free(temp);
}

void insertattail(node *&head, int val)
{
	node *n = new node(val);
	if (head == NULL)
	{
		head = n;
		return;
	}

	node *temp = head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = n;
}
void insertathead(node *&head, int val)
{
	node *n = new node(val);
	node *temp;
	temp = head;
	head = n;
	n->next = temp;
}

void search(node *&head, int key)
{
	node *temp = head;
	while (temp != NULL)
	{
		if (temp->data == key)
		{
			cout << "key is matched " << endl;
			return;
		}
		temp = temp->next;
	}
	cout << "key is not matched" << endl;
}

void display(node *&head)
{
	node *temp = head;
	while (temp != NULL)
	{
		cout << temp->data << "->";
		temp = temp->next;
	}
	cout << endl;
}

void dlt(node *&head, int val)
{
	if (head == NULL)
	{
		cout << "linklist is empty";
		return;
	}
	else if (head->next == NULL)
	{
		node *todelete = head;
		head = head->next;
		free(todelete);
		return;
	}
	else
	{
		node *temp;
		temp = head;
		while (temp->next->data != val)
		{
			temp = temp->next;
		}
		node *todelete = temp->next;
		cout << val << "\t Deleted" << endl;
		temp->next = todelete->next;
		delete todelete; // must write
	}
}

int main()
{
	node *head = NULL;
	insertattail(head, 9);
	insertattail(head, 2);
	insertattail(head, 8);
	insertattail(head, 5);
	insertattail(head, 6);
	insertathead(head, 10);

	// search(head, 1);
	// display(head);
	// dlt(head, 10);
	// display(head);

	// dltAtTail(head);
	dltAthead(head);
	insertattail(head, 17);
	display(head);
	search(head, 11);
}
