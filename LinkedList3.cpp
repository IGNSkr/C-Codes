#include<iostream>
using namespace std;


struct Node{
	int data;
	struct Node * next;
};

void display(struct Node * head)
{
	struct Node * temp= new Node;
	temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	
}

//Deleting the first node
struct Node * deleteFirst(struct Node * head)
{
	struct Node * temp=head;
	head=head->next;
	delete temp;
	return head;
	
}

//Deleting node for a given index 
struct Node * deleteAtIndex(struct Node * head, int index)
{
	struct Node * temp=head;
	struct Node * newnode=head->next;
	
	for(int i=1;i<index-1;i++)
	{
		temp=temp->next;
		newnode=newnode->next;
	}
	
	temp->next=newnode->next;
	
	delete newnode;
	
	
	return head;
}

//Deleting the last node
struct Node * deleteLast(struct Node * head)
{
	struct Node * temp=head;
	struct Node * q=head->next;
	while(q->next!=NULL)
	{
		temp=temp->next;
		q=q->next;
	}
	
	temp->next=NULL;
	delete q;
	
	return head;
	
}


//Deleting a node with a given value 
struct Node * deleteByValue(struct Node * head, int value)
{
	struct Node * temp=head;
	struct Node * temp2=head->next;
	
	while(temp2->data!=value && temp2->next!=NULL)
	{
		temp=temp->next;
		temp2=temp->next;
	}
	
	if(temp2->data==value)
	{
		temp->next=temp2->next;
		delete temp2;
	}
	
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
	seventh->next=NULL;
	
//	display(head);
//	cout<<endl;
	
//	head=deleteFirst(head);
//	display(head);
//	cout<<endl;
	
//	cout<<"Deleting element at index 2:"<<endl;
//	head=deleteAtIndex(head,2);
//	display(head);
//	cout<<endl;
	
	cout<<"New List"<<endl;
	display(head);
	cout<<endl;
	
	cout<<"Last Element Deleted:"<<endl;
	head=deleteLast(head);
	display(head);
	cout<<endl;
	
	cout<<"Deleting the node with value 5:"<<endl;
	head=deleteByValue(head,5);
	display(head);
	cout<<endl;

	
	
	return 0;
}

