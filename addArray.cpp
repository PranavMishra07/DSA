#include<iostream>
using namespace std;
int arr[100];
void display(int n){
	cout<<"\nArray Data : ";
	for(int i= 0;i<n;i++){
		cout<<arr[i]<<" ";
	}

}
void addfirst(int n){
	int x;
cout<<"\nEnter New Data At Start : ";
cin>>x;
for(int i=n;i>=0;i--){
	arr[i+1]=arr[i];
}
arr[0]=x;
n++;
cout<<"\nUpdated Array : ";
for(int i=0;i<n;i++){
	cout<<arr[i]<<" ";
}
}
void addLast(int n){
int y;
cout<<"\nAdd Data At the End Of The Array : ";
cin>>y;
n++;
arr[n]=y;
n++;
cout<<"\nUpdated Array : ";
for(int i=0;i<n;i++){
	cout<<arr[i]<<" ";
}
}
void addPos(int pos,int x,int n){
    n++;
    for(int i=n;i>=pos;i--){
    	arr[i+1]=arr[i];    
    }
    n++;
 	arr[pos]=x;
	n++;
	cout<<"\nUpdated Array : ";
    for(int i=0;i<n;i++){
    	cout<<arr[i]<<" ";
 
} 
    
}

int main(){
    int n;
	cout<<"\nEnter Size of Array : (max 9) ";
    cin>>n;
    cout<<"\nEnter Element of array : ";
    for(int i=0;i<n;i++){
    	cin>>arr[i];
	}
	addfirst(n);

	addLast(n);
    cout<<"\nData Added At the Specific Position : ";
	addPos(2,9,n);
}

