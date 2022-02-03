#include <iostream>
#include<deque>
using namespace std;
int main(){
int n;

    deque<int>d;
    d.push_back(1);
    d.push_front(3);
    d.push_front(5);
    d.push_front(7);
    d.push_front(9);

    for(int i:d){
        cout<<i<<" ";
    }

    // to access element at first index
    cout<<"first element is "<<d.at(1)<<endl;

    cout<<"fornt element is "<<d.front();
}