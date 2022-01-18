#include <iostream>
using namespace std;
int reverse(int a[],int l,int r){
while(l<=r){
    int temp=a[l];
    a[l]=a[r];
    a[r]=a[l];
    l+=1;
    r-=1;
}
}
int main(){
     int a[100];
     for (int i=0;i<=4;i++){
         cin>>a[i];
     }
     cout<<(0.1+0.2);
     
     reverse(a,0,4);
}