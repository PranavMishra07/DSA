#include<iostream>
using namespace std;
#define N 5
int arr[N];
int top=-1;
int pop(){
	int r=-1;
	if(top==-1){
		cout<<"\nStack is Underflow";
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
		cout<<"\nStack Is Overflow";
		return;
	}
	else{
		top++;
		arr[top]=data;
		cout<<"\nData insert success into the Top of the Stack : "<<data;
	}
}
int main(){
	push(10);
	push(20);
	push(30);
	push(40);
	push(50);
	push(60);
	cout<<"\nDelete Top Element of the Stack : "<<pop();
	cout<<"\nDelete Top Element of the Stack : "<<pop();
	cout<<"\nDelete Top Element of the Stack : "<<pop();
	cout<<"\nDelete Top Element of the Stack : "<<pop();
	cout<<"\nDelete Top Element of the Stack : "<<pop();
	
}
