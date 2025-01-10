#include<iostream>
using namespace std;
void delPosData(int arr[],int s){
	
	int pos=1;
	while(pos!=0){
		cout<<"\nSize : "<<s-1;
	cout<<"\nEnter Position To delete Data : ";
	cin>>pos;
	if(pos<0){
		cout<<"Position is Not Found";
		break;
	}
	else if(pos>s){
		cout<<"Position is not Found";
		continue;
	}
    else if(pos>=0){
	for(int i=pos;i<s;i++){
		arr[i]=arr[i+1];
	}
	s--;
	cout<<"\nAfter Delete Data From the Specific Position : ";
	for(int i=0;i<s-1;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
}

}
int main(){
int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
int s=sizeof(arr)/sizeof(arr[0]);
cout<<"\nOriginal Array : ";
for(int i=0;i<s;i++){
	cout<<arr[i]<<" ";
}
cout<<endl;
delPosData(arr,s);







}
