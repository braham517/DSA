#include <bits/stdc++.h>
using namespace std;
class Node{
	public:
	int data;
	Node* next;
	Node(int r)
	{
		data=r;
	}
};
void insertAtbegin(Node ** head,int data)
{
	Node* newNode=new Node(data);
	newNode->next=*head;
	*head=newNode;
}
Node* insertAtend(Node *head,int data)
{
	Node* newNode=new Node(data);
	if(head==NULL){
	head=newNode;
	return head;
	}
	Node*x=head;
	while(x->next!=NULL)
	{
		x=x->next;
	}
	x->next=newNode;
	return head;
}
Node* insertAtpos(Node* head,int data,int pos)
{
	
	Node* newNode=new Node(data);
	if(pos==1)
	{
		newNode->next=head;
		head=temp;
		return head;
	}
	Node* temp=head;
	Node* prev=temp;
	while(pos--)
	{
		if(temp!=NULL)
		{
			prev=temp;
			temp=temp->next;
		}
	}
	prev->next=newNode;
	newNode->next=temp;
	return head;
}
Node* deleteAtfirst(Node*head)
{
	if(head==NULL)
	return NULL;
	Node* temp=head->next;
	delete head;
	return temp;
}
Node* deleteAtLast(Node* head)
{
	if(head==NULL)
	return NULL;
	if(head->next==NULL) //Single element
	return NULL;
	Node* temp=head;
	Node *prev=head;
	while(temp->next!=NULL)
	{
		prev=temp;
		temp=temp->next;
	}
	prev->next=NULL;
	delete temp;
	return head;
}
void print(Node *n)
{
	while(n!=NULL)
	{
		cout<<n->data<<" ";
		n=n->next;
	}
}
int main() {
	Node *head=new Node(1);
	Node* second=new Node(2);
	head->next=second;
	Node* third=new Node(3);
	second->next=third;
	print(head);
	cout<<endl;
	insertAtbegin(&head,5);
	insertAtbegin(&head,75);
	head=insertAtend(head,45);
	head=insertAtend(head,75);
	head=insertAtpos(head,105,3);
	head=deleteAtfirst(head);
	head=deleteAtLast(head);
	head=deleteAtLast(head);
	print(head);
	return 0;
}
