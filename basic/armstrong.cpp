#include <iostream>
#include<math.h>
using namespace std;
int main(){
     int n,lastdigit,sum=0;
     cin>>n;
     int ogn=n;
    while(n>0){
        lastdigit=n%10;
        sum+=pow(lastdigit,3);
        n=n/10;
    }
    cout<<"sum is "<<sum<<endl;
    if(ogn==sum){
        cout<<"armstrong";
    }
    else{
    cout<<"not armstrong";

    }
}