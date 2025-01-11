//Split Arrray
#include<iostream>
using namespace std;
int main(){
int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
int s=sizeof(arr)/4;
int pos=0,ls=0,rs=0;
cout<<"\nArray Is "<<endl;
for(int i=0;i<s;i++)  cout<<arr[i]<<" ";
cout<<"\nEnter Position To Split : ";
cin>>pos;
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
cout<<"\nSplit Array : \n";
cout<<"\nLeft side Array : ";
for(int i=0;i<ls;i++) {
     cout<<lsarr[i]<<" ";
}
cout<<"\nRight side Array : ";
for(int i=0;i<rs;i++) {
     cout<<rsarr[i]<<" ";
}


}
