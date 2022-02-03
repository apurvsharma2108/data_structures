#include <iostream>
#include <queue>
using namespace std;
int main(){
    int n;
    //max heap
    priority_queue<int>q; // the largest element will always be at top

    q.push(1);
    q.push(7);
    q.push(4);
    q.push(5);
    // min heap
    priority_queue<int ,vector<int>,greater<int>> small; 

    n=q.size();
    for(int i=0;i<n;i++){
        cout<<q.top();
        q.pop();
    }
}