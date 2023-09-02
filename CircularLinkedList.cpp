#include<iostream>
using namespace std;

struct Node{
	int data;
	struct Node * next;
};

//Traversing a circular linked list using do-while loop
void traversal(struct Node * head)
{
	struct Node * temp=head;
	
	do{
		cout<<temp->data<<" ";
		temp=temp->next;
	}while(temp!=head);
}

//Inserting new node at the beginning of a circular linked list 
struct Node * insertAtFirst(struct Node * head, int data)
{
	struct Node * newnode;
	newnode= new Node;
	newnode->data=data;
	
	struct Node * temp=head->next;
	
	while(temp->next!=head)
	{
		temp=temp->next;
	}
	
	//At this point, temp points to the last node in the circular linked list
	temp->next=newnode;
	newnode->next=head;
	head=newnode;
	
	return head;
}

int main()
{
	struct Node * head;
	struct Node * second;
	struct Node * third;
	struct Node * fourth;
	struct Node * fifth;
	struct Node * sixth;
	struct Node * seventh;
	
	head= new Node;
	second= new Node;
	third= new Node;
	fourth= new Node;
	fifth= new Node;
	sixth= new Node;
	seventh= new Node;
	
	head->data=1;
	head->next=second;
	
	second->data=2;
	second->next=third;
	
	third->data=3;
	third->next=fourth;
	
	fourth->data=4;
	fourth->next=fifth;
	
	fifth->data=5;
	fifth->next=sixth;
	
	sixth->data=6;
	sixth->next=seventh;
	
	seventh->data=7;
	seventh->next=head;
	
	
	traversal(head);
	cout<<endl;
	
	//Inserting 69 as the first element of the circular linked list 
	head=insertAtFirst(head, 69);
	traversal(head);
	cout<<endl;
	
	return 0;
}

