#include <iostream>
#include <set>
using namespace std;
int main(){
    int n;
    set<int>s;
    s.insert(0);
    s.insert(2);
    s.insert(4);
    s.insert(8);
    for(auto i:s){
        cout<<i;
    }
    cout<<s.count(2);
}