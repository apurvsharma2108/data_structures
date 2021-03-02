#include<iostream>  
  
using namespace std;
//int* insertion(int n,int a[],int ele){
//	n++;
//	for(int i=n;i>=0;i--){
//		a[i]=a[i-1];
//	}
//	a[0]=ele;
//	return a;
//}
  
// main function - 
// where the execution of program begins 
int main() 
{ 
	int n,pos,ele;
    cout<<"enter the size";
    cin>>n;
        int a[100];
    cout<<"enter the elements";
    for(int i=0;i<=n-1;i++){
    	cin>>a[i];
	}
	cout<<"enter the element";
	cin>>ele;
//	insertion(n,a,ele);
	a[n]=a[0];
	a[0]=ele;
	for(int i=0;i<=n;i++){
		cout<<endl<<a[i];
	}
	}
