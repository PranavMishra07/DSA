#include<iostream>
using namespace std;
class Node{
	public:
		Node *next;
		int data;
		Node(int data){
			this->data=data;
			next=NULL;
			cout<<"\nNode Created\n";
		}
};
void display(Node *head){
	Node *temp=head;
	while(temp!=NULL){
		cout<<"==>"<<temp->data;
		temp=temp->next;
	}
	cout<<"\n";
}
Node *backward(Node *head){
	Node *temp=head;
	int count=0;
    for(temp=0;temp=NULL;temp++){
    	count++;
	}
	cout<<count;

}
int main(){
Node*first=new Node(10);
Node*second=new Node(20);
Node*third=new Node(30);
Node*fourth=new Node(40);

Node*head=first;
head->next=second;
second->next=third;
third->next=fourth;

display(head);
backward(head);
display(head);
}

