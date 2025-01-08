//Add At Start
#include<iostream>
using namespace std;
int arr[100];
void addAtStart(int arr[],int n,int x){
	for(int i=n;i>=0;i--){
	arr[i+1]=arr[i];
}
arr[0]=x;
n++;
cout<<"\nUpdated Array : ";
for(int i=0;i<n;i++){
	cout<<arr[i]<<" ";
}
}
int main(){
    int n;	
	cout<<"Enter Size Of Array : ";
	cin>>n;
	cout<<"\nEnter Element Of The Array : ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"\nOriginal Array : ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	int x;
	cout<<"\nEnter Element to add at First Position : ";
	cin>>x;
	addAtStart(arr,n,x);
	
}

