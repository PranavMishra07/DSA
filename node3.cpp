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
Node *addAtPos(int pos,int data){
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
	display(head);
}
