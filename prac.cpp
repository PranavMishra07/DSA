#include<iostream>
using namespace std;
#define n 5
int stack[n],top=-1;
void push(int a){    //to insert element on the top of the stack
	
	if(top==n-1){        // check overflow
		cout<<"Stack is Overflow\n";
		return;
	}
	top++;    
	stack[top]=a;
}
void pop(){     // to delete element and return it
	if(top==-1){
		cout<<"\nStack Is Empty/underflow "<<endl;
		return;
	}
//	stack[top]=-1;
	cout<<"pop Return Deleted element : "<<stack[top]<<endl;
	top--;
}
int peek(){     //to return data of top of the stack
	return stack[top];
}
void display(){
	cout<<"\nElements of Stack Are : "<<endl;
//	cout<<" "<<endl;
	for(int i=top;i>=0;i--){
		cout<<"|\t"<<stack[i]<<"\t|"<<endl;
		cout<<"----------------"<<endl;
	}
}
int main(){
    push(10);
    push(20);
    push(30);
    display();
    cout<<"\nPeek Returns Value of Top of the Stack : "<<peek()<<endl;
    push(40);
    push(50);
    display();
    cout<<"\nPeek Returns Value of Top of the Stack : "<<peek()<<endl;
    push(60);
    push(70);
    display();
    cout<<"\nPeek Returns Value of Top of the Stack : "<<peek()<<endl;    
    pop();
    pop();
    display();
    cout<<"\nPeek Returns Value of Top of the Stack : "<<peek()<<endl;    
    pop();
    display();
    pop();
    pop();
    pop();
    cout<<"\nPeek Returns Value of Top of the Stack : "<<peek()<<endl;
    display();

    
}

