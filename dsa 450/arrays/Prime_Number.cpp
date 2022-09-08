#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <unordered_map>
#include<deque>
#include<queue>
using namespace std;
int main()
{
    int n ;
    bool flag = 0;
    cin >>n;

    for (int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            flag = 1;
            break;
    }
    
    if (flag == 0)
        cout<<"Prime";
    else
        cout<<"Non Prime";

    
}