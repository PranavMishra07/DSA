#include<iostream>
using namespace std;
class Node{
	public:
	int data;
	Node *next;
	Node(int data){
		this->data=data;
		next=NULL;
		cout<<"\nNode created";
	}
};
void display(Node *head){
	Node *temp=head;
	while(temp!=NULL){
		cout<<"==>"<<temp->data;
		temp=temp->next;
	}
}
//Add New Node at the last of the linked list
Node*addAtLast(Node *head,int data){
	Node *newNode=new Node(data);
	if(head==NULL){
		head==newNode;
	}
	else{
		Node*temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=newNode;
	}
	cout<<"\nNode added Success at the End of the Singly linked List\n";
	return head;
}
int main(){
	Node *first=new Node(10);
	Node *second=new Node(20);
	Node *third=new Node(30);
	Node *fourth=new Node(40);
	Node *head=first;
	head->next=second;
    head->next->next=third;
	head->next->next->next=fourth;
	cout<<"\nData of Singly Linked List\n";
	display(head);
	head=addAtLast(head,50);
	cout<<"\nPrint Data Singly Linked After Add New Node At the End of the Linked List\n";
	display(head);
	
}

