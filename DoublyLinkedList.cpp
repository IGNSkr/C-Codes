#include<iostream>
using namespace std;


struct Node{
	int data;
	struct Node * prev;
	struct Node * next;
};

void display(struct Node * head)
{
	struct Node * temp=head;
	struct Node * temp2;

	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp2=temp;
		temp=temp->next;
		
	}
	
	cout<<endl;
	
	while(temp2!=NULL)
	{
		cout<<temp2->data<<" ";
		temp2=temp2->prev;
	}
	
	

}

int main()
{
	struct Node * head;
	struct Node * n2;
	struct Node * n3;
	struct Node * n4;
	struct Node * n5;
	struct Node * n6;
	
	head=new Node;
	n2=new Node;
	n3=new Node;
	n4=new Node;
	n5=new Node;
	n6=new Node;
	
	head->data=1;
	head->prev=NULL;
	head->next=n2;
	
	n2->data=2;
	n2->prev=head;
	n2->next=n3;
	
	n3->data=3;
	n3->prev=n2;
	n3->next=n4;
	
	n4->data=4;
	n4->prev=n3;
	n4->next=n5;
	
	n5->data=5;
	n5->prev=n4;
	n5->next=n6;
	
	n6->data=6;
	n6->prev=n5;
	n6->next=NULL;
	
	display(head);
	
	return 0;
}

