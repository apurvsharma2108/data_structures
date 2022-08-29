#include <iostream>
#include <map>
using namespace std;
int main(){
    int n;
    
    map<int,string>m;
    m[1]="apurav";
    m[2]="sharma";
    m[10]="king";

    m.insert({5,"lord"});

    for(auto i:m){
        cout<<i.first<<" ";
    }

    m.erase(2);

    for(auto i:m){
        cout<<i.first<<" ";
    }
}