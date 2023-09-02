#include<iostream>
using namespace std;

struct Node
{
	int data;	
	struct Node * next; 
};

void traversal(struct Node * ptr)
{
	while(ptr!=NULL)
	{
		cout<<ptr->data<<" ";
		ptr=ptr->next;
	}
}

//Inserting node at beginning, this function returns the new starting node
struct Node * InsertatBeginning(struct Node * head, int data)
{
	struct Node * ptr;
	ptr=new Node;
	
	ptr->next=head;
	ptr->data=data;
	
	return ptr;
}

//Inserting a new node at a given index
struct Node * InsertatIndex(struct Node * head, int data, int index)
{
	struct Node * ptr;
	ptr=new Node;
	
	struct Node * p=head;
	int i=0;
	
	while(i!=index-1)
	{
		p=p->next;
		i++;
	}
	
	ptr->data=data;
	ptr->next=p->next;
	p->next=ptr;
	
	
	return head;
}

//Inserting a node at the end of the linked list
struct Node * InsertAtEnd(struct Node * head, int data)
{
	struct Node * ptr;
	ptr=new Node;
	
	struct Node * p= head;
	
	while(p->next!=NULL)
	{
		p=p->next;
	}
	
	ptr->data=data;
	ptr->next=NULL;
	p->next=ptr;
	
	return head;
}


//Deleting First node
struct Node * deleteFirst(struct Node * head)
{
	struct Node * temp=head;
	head=head->next;
	
	delete temp;
	
	return head;
	
}


int main()
{
	
	struct Node * head;
	struct Node * second;
	struct Node * third;
	
	head= new Node;
	second= new Node;
	third= new Node;
	
	head -> data=1;
	head -> next= second;
	
	second -> data=2;
	second -> next= third;
	
	third -> data=3;
	third -> next= NULL;
	
	
	head= InsertatBeginning(head,20);
	traversal(head);
	
	cout<<endl;
	
	head= InsertatIndex(head, 69, 2);
	traversal(head);
	
	cout<<endl;
	
	head= InsertAtEnd(head, 101);
	traversal(head);
	
	cout<<endl;
	cout<<"After Deleting the First Node"<<endl;
	
	head=deleteFirst(head);
	traversal(head);
	
	
	
	
	
	
	return 0;
}

