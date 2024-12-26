#include<iostream>
using namespace std;
class Node{
	public:
	int data;
	Node *next;
	Node(int data){
		this->data=data;
		next=NULL;
		cout<<"\nNode created\n";
	}
};
void display(Node *head){
	Node *temp=head;
	while(temp!=NULL){
		cout<<"==>"<<temp->data;
		temp=temp->next;
	}
}
Node*addNodeAtStart(Node*head,int data){
	Node*newNode=new Node(data);
	if(head==NULL){
		head=newNode;
	}
	else{
		newNode->next=head;
		head=newNode;
	}
		cout<<"\nNode added Success at the Start of the Singly linked List\n";

	return head;
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
Node *addAtPos(Node *head,int pos,int data){
	Node*newNode=new Node(data);
	Node*temp1=head;
	Node *temp2=head->next;
	pos--;
	while(pos>1){
		temp1=temp1->next;
	temp2=temp2->next;
	pos--;	
	}	
	temp1=temp1->next;
	temp2=temp2->next;
	pos--;
}
Node *deleteFirstNode(Node *head){
	Node *temp=head;
	head=head->next;
	delete temp;
	return head;
}
int main(){
	Node *first=new Node(10);
	Node *second=new Node(20);
	Node *third=new Node(30);
	Node *fourth=new Node(40);
	Node *fifth=new Node(50);
	Node *head=first;
	head->next=second;
    head->next->next=third;
	head->next->next->next=fourth;
	head->next->next->next->next=fifth;
	cout<<"\nData of Singly Linked List\n";
	display(head);
	head=addNodeAtStart(head,5);
	cout<<"\nPrint Data Singly Linked After Add New Node At the Start of the Linked List\n";
	display(head);
	head=addAtLast(head,50);
	cout<<"\nPrint Data Singly Linked After Add New Node At the End of the Linked List\n";
	display(head);
    head=addAtPos(head,5,45);
	display(head);
	head=deleteFirstNode(head);
	display(head);

	
}

