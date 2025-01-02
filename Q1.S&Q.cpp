#include<iostream>
using namespace std;
class Node{
	public:
		int data;
	    Node *next;
		Node(int data){
			this->data=data;
			next=NULL;			
			cout<<"\nNode Created";
			}
};
void display(Node *head){
	Node *temp=head;
	int n;
	cout<<"\nEnter Number of Nodes : ";
	cin>>n;

	while(temp!=NULL){
		int i=temp->data;
	
    		for( i=0;i<n;i++){
			cin>>i;
			cout<<"data inserted ==>"<<i<<"\n";	

    }	
 	temp=temp->next;
}
	cout<<"\n";
}

int main(){
	int i;
	Node *first = new Node(i);
	Node *second=new Node(i);
	Node *third=new Node(i);
	Node *head=first;
	head->next=second;
	second->next=third;
	display(head);

}
