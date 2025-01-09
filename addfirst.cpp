
//add at First
#include<iostream>
using namespace std;
int arr[100];
int main(){
cout<<"\nEnter The Size of The array : ";
int n;
cin>>n;
for(int i=0;i<n;i++){
	cin>>arr[i];
}
cout<<"\nOriginal Array : ";
for(int i=0;i<n;i++){
	cout<<arr[i]<<" ";
}
int x;
cout<<"\nEnter New Data At Start : ";
cin>>x;
for(int i=n;i>=0;i--){
	arr[i+1]=arr[i];
}
arr[0]=x;
n++;
cout<<"\nOriginal Array : ";
for(int i=0;i<n;i++){
	cout<<arr[i]<<" ";
}
int y;
cout<<"\nAdd Data At the End Of The Array : ";
cin>>y;
//for(int i=0;i<n;i++){
//	arr[i+1]=arr[i];
//}
arr[n]=y;
n++;
cout<<"\nOriginal Array : ";
for(int i=0;i<n;i++){
	cout<<arr[i]<<" ";
}
}

