//Soerting Array
#include<iostream>
using namespace std;
int main(){
int arr[]={1,42,12,43,53,64,34,59,17,18,88,13,11,26,75};
int s=sizeof(arr)/4;
int t;  //Extra Variable
cout<<"\nArray Before Sort : "<<endl;
for(int i=0;i<s;i++)  cout<<arr[i]<<" ";
cout<<endl;
for(int i=0;i<s;i++){
	for(int j=i+1;j<s;j++){
		if(arr[i]>arr[j]){
		t=arr[i];
		arr[i]=arr[j];
		arr[j]=t;
	}
	}
}
cout<<"\nArray After Sorted : "<<endl;
for(int i=0;i<s;i++)  cout<<arr[i]<<" ";
}

