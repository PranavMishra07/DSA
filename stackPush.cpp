// Stack 
#include<iostream>
using namespace std;
int stack[5],n=5,top=-1;
void push(int a){
	if(top==n-1){
		cout<<"\nStack is Full/overflow"<<endl;
	}
	else{
		top++;
		stack[top]=a;
	}
}
void display(){
	cout<<"\nElement of Stack are : "<<endl;
	cout<<" "<<endl;
	for(int i=top;i>=0;i--){
		cout<<"|\t"<<stack[i]<<"\t|"<<endl;
		cout<<"-----------------"<<endl;
	}
	cout<<endl;
}

int main(){
push(10);
push(20);
display();
push(30);
push(40);
push(50);
push(60);
push(70);
display();
pop(10);
}

