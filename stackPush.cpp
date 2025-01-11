// Stack using 
// LIFO(Last in first Out) or FILO(First in Last Out)
// stck[top]=n-1  it means stack is Full

//Algorithm 
// if full than exit and print Message 
// if Not full than procceed and insert element to top of the Stack
// top++;
#include<iostream>
using namespace std;
int stack[5],n=5,top=-1;
void push(int a){
	if(top==n-1){                             // check overflow
		cout<<"\nStack is Full/overflow"<<endl;     // if full than exit and print Message     
	}
	else{        // if Not full than procceed 
		top++;       // top++;
		stack[top]=a;              //and insert element to top of the Stack
	}
}
void display(){
	//stack print Top to 0 index value
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
}

