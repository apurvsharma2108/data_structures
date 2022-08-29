#include <iostream>
using namespace std;
int main(){
    int n;
    cin>> n;
    int t0=0;
    int t1=1;
    int t;
    cout<<"0 "<<"1 ";
    for(int i=1;i<=n;i++){
        t=t0+t1;
        cout<<t<<" ";
        t0=t1;
        t1=t;
    }

}