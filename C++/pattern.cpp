#include <iostream>
using namespace std;
int solve(int n){
    if (n==1){
        return 1;
    }
    solve(n-1);
    cout<<n;
}
int main(){
int n;
n=10;
cout<<solve(n);
}