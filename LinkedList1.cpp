#include<iostream>
using namespace std;

//declaring the linked list using structure
struct Node
{
	int data;	
	struct Node * next; //	self referencing pointer
};

//traversing linked list
void traversal(struct Node * ptr)
{
	int c=1;
	while(ptr!=NULL)
	{
		cout<<"Element in Node "<<c<<": "<<ptr->data<<endl;
		ptr= ptr->next;
		c++;
	}
}

int main()
{
	//creting head node
	struct Node * head;
	// creating the rest of the nodes
	struct Node * second;
	struct Node * third;
	struct Node * fourth;
	
	//allocting the nodes in heap memory
	head= new Node;
	second= new Node;
	third= new Node;
	fourth= new Node;
	
	//linking all the nodes together
	head -> data=1;
	head -> next= second;
	
	second -> data=2;
	second -> next= third;
	
	third -> data=3;
	third -> next= fourth;
	
	fourth -> data=4;
	fourth -> next= NULL;
	
	traversal(head);
	
	return 0;
}
