#include<iostream>
using namespace std;
#define n 5
int arr[n],top=-1;
void push(int a){
	if(top==n-1){
		cout<<"Stack is Overflow\n";
		return;
	}
	top++;
	stack[top]=a;
}
void pop(){
	if(top==-1){
		cout<<"\nStack Is Overflow "<<endl;
		return;
	}
	cout<<"pop Return Deleted element : "<<stack[top]<<endl;
	top--;
}
int peek(){
	return stack[top];
}
int main(){
    push(10);
    
}

