#include<iostream>
using namespace std;
int arr[100];
void dispArr(int arr[],int n){
	cout<<"Array Data : ";
	for(int i=0;i<n;i++)  cout<<arr[i];
	cout<<endl;
}
void addEnd(int arr[],int n){
	cout<<"Data Added at the End : ";
	for(int i=0;i<=n;i++){
		cout<<arr[i+i];
	
	}
}

int main(){
  cout<<"\nEnter the size of array : (max)";
  int n;
  cin>>n;
  for (int i=0;i<n;i++){
  	cin>>arr[i];
  }
  addEnd(arr,n);
}

