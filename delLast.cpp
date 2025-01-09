#include<iostream>
using namespace std;
void delLastdata(int arr[],int s){
	cout<<"\nAfter Deleted Last Data : ";
	for(int i=0;i<s-1;i++){
		cout<<arr[i]<<" ";
	}
cout<<endl;   

}
int main(){
	
int arr[]={1,2,3,4,5,6,7,8,9,10};
int s=sizeof(arr)/sizeof(arr[0]);
cout<<"\nOriginal Array Data : ";
for(int i=0;i<s;i++){
	cout<<arr[i]<<" ";
   }
   cout<<endl;
   
   delLastdata(arr,s);
    s--;   //delete deleted index;
   delLastdata(arr,s);
  s--;
}

