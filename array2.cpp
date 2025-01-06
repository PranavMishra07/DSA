#include<iostream>
using namespace std;
int main(){
	
	int arr[10];
	int x=10;
	int *p;
	p=arr;
	for (int i=0;i<101;i++){
		arr[i]=x;
		x+=10;
	}
	for (int i=0;i<10;i++){
	
//	cout<<"\nData at the Position "<<i<<" "<<arr[i]<<" "<<arr<<endl;
//	cout<<"\nData at the Position "<<i<<" "<<arr[i]<<" "<<&arr[i]<<endl;
	cout<<"\nData at the Position "<<i<<" "<<arr[i]<<" "<<p<<endl;


	}

}

