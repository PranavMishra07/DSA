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
}
