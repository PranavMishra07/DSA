#include<iostream>
using namespace std;
class Node{
	public:
	int data;
	Node *next;
	Node(int data){
	    this->data=data;
	    next=NULL;
	    cout<<"\nNode Created\n";
	}
};
void display(Node *head){
	Node*temp=head;
	while(temp!=NULL){
		cout<<"==>"<<temp->data;
		temp=temp->next;
	}
	cout<<"\n";
} 

Node *addNodeAtStart(Node*head,int data){
	Node*newNode=new Node(data);
	if(head==NULL){
		head=newNode;
	}
	else{
		newNode->next=head;
		head=newNode;
	}
		cout<<"\nNode Added success at the start of the list\n";
	    return head;
}
Node* addNodeAtLast(Node*head,int data){
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
	cout<<"\nNode added success at the end of the  list\n";
	return head;
}
Node *addAtPos(Node *head,int pos,int data){
    	Node *newNode=new Node(data);
    	Node *temp1=head;
    	Node* temp2=head->next;
    	pos--;
    	while(pos>1){
    		temp1=temp1->next;
    		temp2=temp2->next;
    		pos--;
		}
		temp1->next=newNode;
		newNode->next=temp2;
	
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
	Node *head=first;
	display(head);
    head=addNodeAtStart(head,20);
	display(head);
	addNodeAtLast(head,30);
	display(head);
	addAtPos(head,2,40);
	display(head);
	head=deleteFirstNode(head);
	display(head);
}

