#include <iostream>
using namespace std;
int F[51];
int fibo(int n){
    if (F[n]!=-1){
        return F[n];
    }
    F[n]=fibo(n-1)+fibo(n-2);
    return F[n];
}
int main(){
    int n;
    cin>>n;
    n=10;
    for(int i=0;i<=n-1;i++){
        F[i]=-1;
    }
    F[0]=0;
    F[1]=1;
    int result=fibo(10);
    cout<<result;
}