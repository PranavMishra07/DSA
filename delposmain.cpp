//Delete at Specific Position  without While Loop
#include<iostream>
using namespace std;
int main(){
int arr[]={10,20,30,40,50,60,70,80,90,100,110,120,130,140,150,160};
int s=sizeof(arr)/sizeof(arr[0]);
cout<<s;
cout<<"\nOriginal Array Data : ";
for(int i=0;i<s;i++){
	cout<<arr[i]<<" ";
}
cout<<endl;
int pos;
cout<<"\nEnter Position : ";
cin>>pos;
if(pos<0){
  cout<<"Position Is Not Found";
}
else if(pos>=0){
	for(int i=pos;i<s;i++){
		arr[i]=arr[i+1];
	}
//    s--;             
	for(int i=0;i<s-1;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

}

