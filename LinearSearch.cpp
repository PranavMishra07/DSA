//Linear Search
#include<iostream>
using namespace std;
int main(){
int arr[]={1,2,3,32,43,4,3,54,65,423,45,3,34,4,3,3,5,23,43,4,};
int s=sizeof(arr)/4;
int key;
cout<<"\nArray Is : "<<endl;
for(int i=0;i<s;i++)  cout<<arr[i]<<" ";
cout<<"\nEnter Key : ";
cin>>key;
bool abc=true;
for(int i=0;i<s;i++){
	if(arr[i]==key){
		abc=false;      
		cout<<"Element Found At The Position "<<i+1<<endl;
		break;
	}
}
if(abc){   //if abc is true then
	cout<<"Element Not Found ";
}
}

