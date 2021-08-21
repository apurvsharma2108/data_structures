#include <iostream>
using namespace std;
int main(){
     int n;
     cin>>n;
     for(int i=n;i>=1;i--){
         for(int j=1;j<=i;j++){
             cout<<"* ";
         }
         cout<<endl;
     }
}   

// python code 
// a=int(input())
// for i in reversed(range(1,a+1)):
//     print(i*'*')


// *****
// ****
// ***
// **
// *