//Queue push/enqueue()
#include<iostream>
using namespace std;
#define n 5
int queue[n];
int f=-1;
int r=-1;
void enqueue(int x){
	if(f==n-1){     //check overflow
		cout<<"\nQueue is Already Full "<<endl;
		return;
	}
	if(f==-1){    //if Empty 
		f=0;      //then intialize front with 0
	}
    r++;             //rare increasw
    queue[r]=x;       // give queue a Value
    cout<<"\nElement of Queue : "<<endl;
	cout<<x<<endl;

}
int main(){
enqueue(10);
enqueue(20);
enqueue(30);
enqueue(40);
enqueue(50);
enqueue(60);
enqueue(50);
}

