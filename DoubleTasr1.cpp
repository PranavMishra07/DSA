#include<iostream>
using namespace std;
class Node{
	public:
	int data;
	Node *prev;
	Node *next;
	Node(int data){
		prev=NULL;
		this->data=data;
		next=NULL;
		cout<<"\nNode Created\n";
	}
};
void printForward(Node *head){
	if(head==NULL){
		cout<<"\nList Is Empty";
	}
	else if(head->next==NULL){
		cout<<"\nList Data\n";
		cout<<"<=="<<head->data<<"==>";
	}
	else{
		cout<<"\nList Data In Forwarad Direction \n";
        while(head!=NULL){
        	cout<<"<=="<<head->data<<"==>";
        	head=head->next;
		}		
	}
}
Node *printBackward(Node*tail){
	if(tail==NULL){
       cout<<"\nList is Empty";		
	}

	else{
		cout<<"\nList Data in BackWard Direction \n";
    while(tail!=NULL){
    	cout<<"<=="<<tail->data<<"==>";
    	tail=tail->prev;
	}		
	}
}
//Node *addNodeAtStart(Node *head,int data){
//      Node* newNode=new Node(data);
//      if(head->prev==NULL){
//      	newNode->next=head;
//      	head->prev=newNode;
//      
// 	  }
//  cout<<"\nNode added";
//  	 return head;   
//}
Node *addNodeAtStart(Node *head,int data){
      Node* newNode=new Node(data);
      if(head==NULL){
      	head=newNode;
      
 	  }
 	  else{
 	  	head->prev=newNode;
 	  	newNode->next=head;
 	    head=newNode;
 	     
	   }
  cout<<"\nNode added";
  	 return head;   
}
Node *addNodeAtEnd(Node *tail,int data){
      Node* newNode=new Node(data);
    
     	if(tail==NULL){
		tail==newNode;
	}
	else{
		tail->next=newNode;
        tail=tail->next;
		tail=newNode;		
	}
  cout<<"\nNode added"; 
  	return tail; 
    
}
//Node *addNodeAtEnd(Node *head,int data){
//	Node *newNode=new Node(data);
//	if(head->prev==NULL){
//		newNode->prev=head;
//		head->next=newNode;
//	}
//	cout<<"\nNode Added";
//
//}
Node *addNodeAtPos(Node *head,int pos,int data){
	 Node *newNode=new Node(data);
	 
     while(pos>1){
	 head=head->next;    
        head->prev=head;
        pos--;
	 }
	 
	 head->next=newNode;
	 newNode->prev=head;
}
Node *deleteFirstNode(Node *head){
	delete head;
	head=head->next;
	return head;
}
Node *deleteLastNode(Node *tail){
	if(tail->next=NULL){
	delete tail; 
	tail=tail->prev;    		
	}
    return tail;
}

int main(){
Node *f1=new Node(10);
Node *f2=new Node(20);
Node *f3=new Node(30);
Node *f4=new Node(40);

f1->next=f2;
f2->prev=f1;

f2->next=f3;
f3->prev=f2;

f3->next=f4;
f4->prev=f3;
Node*head=f1;
Node*tail=f4;
f4->next=tail;
tail->next=NULL;
printForward(head);
head=addNodeAtStart(head,5);
//printBackward(tail);
//printForward(head);
cout<<"\nData added at start of the Doubly Linked List";
printForward(head);
addNodeAtEnd(tail,50);
cout<<"\nData added at the End Of the doubly Linked List";
printForward(head);
head=deleteFirstNode(head);
cout<<"\n\nDelete First Node";
printForward(head);
deleteLastNode(tail);
cout<<"\n\nDelete Last Node";
printForward(head);
}

