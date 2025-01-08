//Add At the specific Position
#include<iostream>
using namespace std;
int arr[100];
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
	int pos;
	cout<<"\nEnter Specific Position : ";
	cin>>pos;
    int x;
	cout<<"\nEnter Data To Insert : ";
    cin>>x;
    for(int i=n;i>=pos;i--){
    	arr[i+1]=arr[i];
	}
	arr[pos]=x;
	n++;
	cout<<"\nOriginal Array : ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}

