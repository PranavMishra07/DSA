//del data
#include<iostream>
using namespace std;
void deldata(int arr[],int s){
	for (int i=0;i<s;i++){
		arr[i]=arr[i+1];
	}
	cout<<"\nFirst Element Deleted : ";
	for(int i=0;i<s-1;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main(){
int arr[]={1,2,3,4,5,6,7,8,9,10};
int s=sizeof(arr)/sizeof(arr[0]);
cout<<"\nOriginal Data : ";
for(int i=0;i<s;i++)  cout<<arr[i]<<" ";
cout<<endl;
deldata(arr,s);
s--;
deldata(arr,s);
s--;
}

