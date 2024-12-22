//Stack implementation using array
//check underflow   //  Delete item
#include<iostream>
using namespace std;
#define N 5
int arr[N];
int top=-1;

int pop(){
	int r=-1;
	//Step1: Check UnderFlow Condition
	if(top==-1){
		cout<<"\nUnderFlow Condition";
		return r;
	}
	else{
		//Step 2: Store top Index Value into Another Value;
		r=arr[top];
		//step3: Decrease Top by 1
		top--;
	}
	//Step4: Return Result
	return r;
	
}
void push(int data){
	//Step1:Check Overflow Condition
	if(top==N-1){
		cout<<"\nStack OverFlow";
		return;
	}
	else{
		//Step2:Increment Top by 1
		top++; //0
		//Step 3:Assign Data into Top
		arr[top]=data;
		cout<<"\nData Insert Success into the Top of the Stack : "<<data;
	}
}
int main(){
	//call method
	push(10);
	push(20);
	push(30);
	push(40);
	push(50);
	push(60);
	//Stack is full
	//Delete Data from the Stack with pop() function
	cout<<"\nDelete Top Element of the Stack : "<<pop();
	cout<<"\nDelete Top Element of the Stack : "<<pop();
	cout<<"\nDelete Top Element of the Stack : "<<pop();
	cout<<"\nDelete Top Element of the Stack : "<<pop();
	cout<<"\nDelete Top Element of the Stack : "<<pop();
	cout<<"\nDelete Top Element of the Stack : "<<pop();
	




}
