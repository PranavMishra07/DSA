//
#include<iostream>
using namespace std;
int BinSearch(int arr[],int s){
	int low,high,mid;
	low=0;
	high=s-1;
int key ;
        cout<<"\nSize : "<<s<<endl;
		cout<<"Enter Key To find : ";
        cin>>key;
      	while(low<=high){
		mid=(low+high)/2;
		if(arr[mid]==key){
			return mid;
		}
		else if(arr[mid]<key){
			low=mid+1;
		}
		else{
			high=mid-1;
		}
	
}
	return -1;
}
int main(){
int arr[]={12,3,4,42,3,23,34,5,46,6,5,34,6,57,7,98,6565,24,55,7,6,565,3};
int s=sizeof(arr)/sizeof(arr[0]);
int t;  //temprary third variable
cout<<"\nArray before Sorting : ";
for(int i=0;i<s;i++)  cout<<arr[i]<<" ";
for(int i=0;i<s;i++){   // go through the array
	for(int j=i+1;j<s;j++){   //for checking
		if(arr[i]>arr[j]){  // > for sorting in increment
			t=arr[i];
			arr[i]=arr[j];
			arr[j]=t;
		}
	}
}
cout<<"\nAfter Sorting : ";
for(int i=0;i<s;i++)  cout<<arr[i]<<" ";
cout<<endl;
//int key ;
//cout<<"\nSize : "<<s<<endl;
//cout<<"Enter Key To find : ";
//cin>>key;
int x =BinSearch(arr,s);
cout<<x;
int y =BinSearch(arr,s);
cout<<y;
}

