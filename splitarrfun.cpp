//split array in two Part
#include<iostream>
using namespace std;
int splitArr(int arr[],int s){
	int pos =0;
	cout<<"Enter Position to split array : ";
	cin>>pos;
	int ls=0,rs=0;
	ls=pos;
	rs=s-ls;
	int lsarr[ls];
	int rsarr[rs];
	for(int i=0;i<ls;i++){
		lsarr[i]=arr[i];
	}
	for(int i=ls,j=0;i<s;i++,j++){
		rsarr[j]=arr[i];
	}
	cout<<"\nSplits Array are : ";
		cout<<"\nLeft side Array : ";

	for(int i=0;i<ls;i++){
		cout<<lsarr[i]<<" ";
	} 
	cout<<endl;
		cout<<"\nRight side Array : ";

	for(int i=0;i<rs;i++) cout<<rsarr[i]<<" ";
	cout<<endl;
}

int main(){
	int arr[]={12,2,23,45,21,56,70,5,78,32,78,5435,6,754,3,56,2,25,3};
	int s=sizeof(arr)/4;
	int t;
	cout<<"\nArray Before Sorting : ";
	for(int i=0;i<s;i++){
		cout<<arr[i]<<" ";
	}
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
	cout<<"Array After Sorting : ";
	for(int i=0;i<s;i++) cout<<arr[i]<<" ";
	cout<<endl;
//	int pos =0;
//	cout<<"Enter Position to split array : ";
//	cin>>pos;
	splitArr(arr,s);
	splitArr(arr,s);
}



