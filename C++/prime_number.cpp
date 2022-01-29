#include <iostream>
#include <cmath>
using namespace std;

string check(int n){
    int i=2;

    while(i<=sqrt(n)){
        if(n%i==0){
            return("non prime");
        }
        i+=1;
    }
    return("prime");

}

int main(){
     int n,flag=0;
     cin>>n;
     cout<<check(n);
}