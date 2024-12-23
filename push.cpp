#include<iostream>                 
using namespace std;
#define N 5
int arr[N];
int top=-1;
void push (int data){
	if(top==N-1){
		cout<<"\nStack is Overflow";
		return;
	}
	else{
		top++;
		arr[top]=data;
		cout<<"\nData Insert Success into the top of the Stack "<<data;
	}
}
int main(){
	push(10);
	push(20);
	push(30);
	push(40);
	push(50);
	push(60);
	push(70);
	pop(70);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	




	
}
