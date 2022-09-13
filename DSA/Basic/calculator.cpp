#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <unordered_map>
#include<deque>
#include<queue>
using namespace std;
int main()
{
    int a,b;
    char ch;
    
    cout<<" Enter A"<<" ";
    cin>>a;
    cout<<" Enter B"<<" ";
    cin>>b;

    cout<<" Enter Character"<<" ";
    cin>>ch;

    switch (ch)
    {
    case '+':
        cout<<" The answer is "<<a+b;
        break;
    case '-':
        cout<<" The answer is "<<a-b;
        break;
    case '*':
        cout<<" The answer is "<<a*b;
        break;
    case '/':
        cout<<" The answer is "<<a/b;
        break;
    
    default:
        cout<<" Invalid Operation";
        break;
    }


}