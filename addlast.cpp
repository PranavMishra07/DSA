//addData At The End of the Array 
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
int y;
cout<<"\nAdd Data At the End Of The Array : ";
cin>>y;
arr[n]=y;
n++;
cout<<"\nOriginal Array : ";
for(int i=0;i<n;i++){
	cout<<arr[i]<<" ";
}
}

