#include <iostream>
#include<math.h>
using namespace std;

int fiboo(int n){
    if(n<=1){
        return n;
    }
    else{
        return fiboo(n-1)+fiboo(n-2);
    }
}

int sqfib(int n){
    int t1=0,t2=1,nextTerm;

    for(int i=1;i<=n;i++){
        cout<<t1<<endl;
        nextTerm=t1+t2;
        t1=t2;
        t2=nextTerm;
    }

}

int main(){
     int n;
     cin>>n;
     cout<<"Sum is ";
     cout<<fiboo(n)<<endl;
     cout<<sqfib(n);
}