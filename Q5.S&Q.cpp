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
void display (Node *head){
	Node *temp=head;
	while(temp!=NULL){
		cout<<"\n==>"<<temp->data;
		temp=temp->next;
	}
	cout<<"\n";
}
Node* addNodeAtEnd(Node *head,int data){
	Node *newNode=new Node(data);
	if(head==NULL){
		head=newNode;
	}
	else{
		Node*temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
	temp->next=newNode;
	}
	cout<<"\nInput Data to Insert at the END of the List : "<<data;
	return head;
}
int main(){
Node *first=new Node(5);
Node *second = new Node(6);
Node *third=new Node(7);

Node *head=first;
head->next=second;
second->next=third;

display(head);
head=addNodeAtEnd(head,8);
cout<<"\nData after Inserted in the list are : \n";
display(head);
}


