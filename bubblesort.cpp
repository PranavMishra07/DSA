#include<iostream>
using namespace std;
int main(){
int arr[]={12,3,4,42,3,23,34,5,46,6,5,34,6,57,7,98,6565,24,55,7,6,565,3};
int s=sizeof(arr)/sizeof(arr[0]);
int t;
cout<<"\nArray before Sorting : ";
for(int i=0;i<s;i++)  cout<<arr[i]<<" ";
for(int i=0;i<s;i++){
	for(int j=i+1;j<s;j++){
		if(arr[i]>arr[j]){
			t=arr[i];
			arr[i]=arr[j];
			arr[j]=t;
		}
	}
}
cout<<"\nAfter Sorting : ";
for(int i=0;i<s;i++)  cout<<arr[i]<<" ";
cout<<endl;



}

