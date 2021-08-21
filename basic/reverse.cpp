#include <iostream>
using namespace std;
int main(){
     int n,lastdigit,rev=0;
     cin>>n;
    while(n>0){
        lastdigit=n%10; // extract the last digit
        rev=rev*10+lastdigit;  //rverese*10 for place value
        n=n/10;
    }
    cout<<rev;
}