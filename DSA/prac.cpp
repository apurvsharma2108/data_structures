#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <unordered_map>
#include<deque>
#include<queue>
using namespace std;
// 0 , 1 , 1 , 
int main()
{
    int t1 = 0 , t2 = 1;
    int n;
    cout<<"enter n";
    cin>>n;

    for (int i =0;i<=n-1;i++)
    {
        // int nw = t1+t2;
        // cout<<nw<<" ";
        // t1 = t2;
        // t2=nw;
        cout<<t1+t2;
        t1=t2;
        t1 = t1+t2;
    }
    

}