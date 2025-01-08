#include<iostream>
using namespace std;
int arr[100];
void addAtEnd(int arr[],int n,int x){
	arr[n]=x;
	n++;
	cout<<"\nUpdated Array : ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
int n;
cout<<"Enter Size Of array : ";
cin>>n;
cout<<"\nEnter Element Of the Array : ";
for(int i=0;i<n;i++){
	cin>>arr[i];
}
cout<<"\nOriginal Array : ";
for(int i=0;i<n;i++){
	cout<<arr[i]<<" ";
}
int x;
cout<<"\nEnter Data To Insert At the End Of The Array : ";
cin>>x;
addAtEnd(arr,n,x);
}

