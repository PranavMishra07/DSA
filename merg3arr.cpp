//Merging three Array 
#include<iostream>
using namespace std;
int main(){
	int arr[]={1,2,3,4,5,6,7,8,9};
	int brr[]={11,22,33,44,55,66,77,88,99};
	int crr[]={111,222,333,444,555,666,777,888,999};
	int n1,n2,n3,n;
	n1=sizeof(arr)/4;
	n2=sizeof(brr)/4;
	n3=sizeof(crr)/4;
	n=n1+n2;
	int drr[n];
	int s=n+n3;
	int err[s];
	s=sizeof(err)/4;
	cout<<s<<endl;
for(int i=0;i<n1;i++) cout<<arr[i]<<" ";
cout<<endl;
for(int i=0;i<n2;i++)  cout<<brr[i]<<" ";
cout<<endl;
for(int i=0;i<n3;i++)  cout<<crr[i]<<" ";
cout<<endl;

	for(int i=0;i<n1;i++) drr[i]=arr[i];
	for(int i=n1,j=0;i<n;i++,j++) drr[i]=brr[j];



	

}

