#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class node
{
public:
	int data;
	node *next;
	node(int val)
	{
		data = val;
		next = NULL;
	}
};
void insertathead(node *&head, int val)
{
	node *n = new node(val);
	n->next = head;
	head = n;
}

node *dltlink(node *head)
{
	node *temp;
	temp = head;
	head = head->next;
	free(temp);
	return head;
}

/* node* dlt(node* &head,int val)
{

  if(head==NULL)
	{
	   cout<<"linklist is empty";
	 return head;
	}
	else if(head->next==NULL)
	{
	  free(head);
	  head=NULL;
	  return head;
	}
	else
	{
	 node* temp;
	 temp=head;
	 while(temp->next->data!=val)
	 {
	 temp=temp->next;
	 }
	 node* todelete=temp->next ;
	 temp->next= temp->next->next ;
	 delete todelete;
	 return head;
	}
} */
void insertattail(node *&head, int val)
{
	node *n = new node(val);
	node *temp = head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = n;
}



void display(node *head)
{
	if (head == NULL)
	{
		cout << "link list is empty " << endl;
	}
	else
	{
		node *temp = head;
		while (temp != NULL)
		{
			cout << temp->data << "->";
			temp = temp->next;
		}
		cout << "NULL" << endl;
	}
}

int length(node *head)
{
	int k = 0;
	node *curr = head;
	while (curr != NULL)
	{
		curr = curr->next;
		k++;
	}
	return k;
}
/* node* revbyswap(node* head)
{

	int k=0;
	node* curr=head;
	while(curr!=NULL)
	{
	  curr=curr->next;
	   k++;
	}

   node* p;
   node* q;
   q=head;
   p=head;
   int len=k;
   int i=0;
   int j=len-1;
   while(i<j)
   {
	  int m=0;
	  while(m<j)
	   {
		   q=q->next;
	   }
	  int temp;
	  temp =p->data;
	  p->data=q->data;
	  q->data=temp;
	  i++;
	  j--;
	  p=p->next;
	  q=head;
   }
   return head;
}
*/
void dltalllist(node *head)
{
	node *temp;
	temp = head;
	while (temp != NULL)
	{
		temp = head->next;
		temp = temp->next;
	}
}

node *revlist(node *&head)
{
	node *currptr = head;
	node *prevptr = NULL;
	node *nextptr;
	while (currptr != NULL)
	{
		nextptr = currptr->next;
		currptr->next = prevptr;
		prevptr = currptr;
		currptr = nextptr;
	}
	return prevptr;
}

int main()
{
	node *head = NULL;
	insertathead(head, 2);
	insertathead(head, 3);
	insertathead(head, 5);
	insertathead(head, 11);
	insertathead(head, 8);
	insertathead(head, 10);
	// display(head);

	/*  head=revlist(head);
	 display(head);
	 cout<<length(head)<<endl;

	 insertattail(head,21);
	 display(head);
	 cout<<length(head)<<endl; */

	// revbyswap(head);
	head = dltlink(head);
	head = dltlink(head);
	head = dltlink(head); // 3 link deleted from front .
	// display(head);
	insertathead(head, 19);
	insertathead(head, 88);
	display(head);
	//	 head=dltlink(head);
	int l = length(head);
	cout << "length" << l << endl;
}
