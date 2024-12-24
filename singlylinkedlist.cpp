#include<iostream>
using namespace std;
#define N 5
int arr[N];
int top=-1;
       bool isEmpty(){
       	return top==-1;
	   }
	   bool isFull(){
	   	return top==N-1;
	   }
	   int pop(){
	   	int r=-1;
	   	if(top==-1){
	   		return r;
		   }
		   else{
		   	r=arr[top];
		   	top--;
		   }
		   return r;
	   }
	   void push(int data){
	   	if(top==N-1){
	   		cout<<"\nStack OverFlow";
	   		return;
		   }
		   else{
		   		top++;
		   	arr[top]=data;
		   	cout<<"\nData Insert Success into the top Of the Stack : "<<data;
		   }
}
      int peek(){
      	return arr[top];
	  }
	  void display(){
	  	if(isEmpty()){
	  		cout<<"\nStack is Empty";
		  }
		  else{
		  	for(int i=top;i>=0;i--){
		  		cout<<"\n==>"<<arr[i];
			  }
		  }
	  }
	  int main(){
	  	push(10);
	  	push(20);
	  	push(30);
	  	push(40);
	  	push(50);
	  	display();
	  	cout<<"\nDelete top Element Of the stack: "<<pop();
	  	cout<<"\nTop Element of the Stack : "<<peek();
	  		cout<<"\nStack is Full or not : "<<isFull();
	  	cout<<"\nDelete Top element of the Stack : "<<pop();
	  	cout<<"\nDelete Top Element Of the Stack : "<<pop();
	  	cout<<"\nDelete Top Element Of the Stack : "<<pop();
	  	cout<<"\nDelete Top Element Of the Stack : "<<pop();
	  
	  	cout<<"\nStack is Empty or Not : "<<isEmpty();
	  	
	  }
