#include <iostream>
#include<stack>
#include<queue>
using namespace std;
int main(){
    int n;

    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout<<"top element "<<s.top()<<endl;


    //-------------------------------------------

    queue<string>q;
    q.push("apurAV");
    q.push("sharmna");
    q.push("king");
    cout<<"top element "<<q.front();
}