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
				cout<<"=>"<<temp->data;
				temp=temp->next;
			
			}
				cout<<"\n";
		}
		Node *addAtPos(Node *head,int pos,int data){
			Node*newNode=new Node(data);
			Node*temp1=head;
			Node*temp2=head->next;
			pos--;
			while(pos>1){
				temp1=temp1->next;
				temp2=temp2->next;
				pos--;
			}
	        temp1->next=newNode;
	        newNode->next=temp2;
		}
		void deleteNodeAtPos(Node *head,int pos){
			pos--;
			Node *temp1=head;
			Node *temp2=head->next;
			while(pos>1){
				temp1=temp1->next;
				temp2=temp2->next;
				pos--;
			}
			Node* temp3;
			temp1->next=temp2->next;
			temp3=temp2;
			delete temp3;
		}
		Node *deleteFirstNode(Node *head){
			Node *temp=head;
			head=head->next;
			delete temp;
			return head;
		}
		Node *deleteLastNode(Node *head){
			Node *temp=head;
			if(head->next==NULL){
				head=NULL;
				delete temp;
				
			}
			else{
				while(temp->next->next!=NULL){
					temp=temp->next;
				}
				Node* temp2=temp->next;
				temp->next=NULL;
				delete temp2;
			}
			return head;
		}	
int main(){
	Node*first=new Node(10);
	Node*second=new Node(20);
	Node*third=new Node(30);
	Node*fourth=new Node(40);
	Node*fifth=new Node(50);
    Node *head=first;
    head->next=second;
//    head->next->next=third;
second->next=third;
third->next=fourth;
fourth->next=fifth;
//    head->next->next->next=fourth;
//    head->next->next->next->next=fifth;
    cout<<"Print Data Of Singly Linked List\n";
    display(head);
    addAtPos(head,5,23);
    cout<<"\nPrint Data after Inserting New Data at Specific Position\n";
    display(head);
    head=deleteFirstNode(head);
    cout<<"\nPrint Data after Deleting First Node of the Singly Linked List\n";
    display(head);
	deleteLastNode(head);
	cout<<"\nPrint Data after Deleting Last Node of the Singly Linked List\n";
    display(head);
    deleteNodeAtPos(head,4);
    cout<<"\nPrint Data after Delete Node at specific position of the Singly Linked List\n";
    display(head);
}
