//#include<iostream>
//using namespace std;
//int main(){
//	int n,fact=1;
//	cout<<"\nEnter any Number : ";
//	cin>>n;
//	for(int i=1;i<=n;i++){
//		fact=fact*i;
//	
//	}
//		cout<<fact;
//	
//	
//}
//#include<iostream>
//using namespace std;
//    fact(int n){
//if(n==1){
//	return 1;
//	}    	
//else{
//	return n*fact(n-1);
//}
//
//return 0;
//	}
//int main(){
//	int n;
//	cout<<"\nEnter Any Number : ";
//	cin>>n;
//cout<<"\nFactorial of Number Is :"<<fact(n);
//	
//}
//#include <iostream>
//
//using namespace std;
//
//class Parent{
//public:
//virtual void display(){//Virtual Function
//cout<<"\nThis is Parent Class Display Method";
//
//}
//
//};
//
//class Derived: public Parent{
//public:
//void display(){
//cout<<"\nThis is Derived Class Display Method";
//
//}
//
//};
//class Derived1: public Parent{
//public:
//void display(){
//
//cout<<"\nThis is Derived1 class Display Method";
//
//}
//
//};
//
//int main(){
//Parent *p1;//Base class Pointer:
//
//Derived obj1;
//p1=&obj1;//Initilized Base class Pointer to Derived class Reference
//
//p1->display();
//Derived1 obj2;
//p1=&obj2;//Initilized Base class Pointer to Derived1 class Reference
//
//p1->display();
//
//return 0;
//}
#include<iostream>
#include<fstream>
using namespace std;
int main(){
	string s;
	cout<<"\nReading Data From The File : \n";
	ifstream obj("thursday.txt",ios::in);
    while(getline(obj,s)){
    	cout<<s;
	}
	obj.close();
	return 0;
	//ios :: app ===> file open in append mode 
	//ios :: in ===> file open in Reading mode 
	//ios :: out ===> file open in Write mode 
	


}

