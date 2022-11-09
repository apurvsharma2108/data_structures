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
    int n;

    int a[] = {1,2,3,4,5,6,7};
    int sz = sizeof(a)/sizeof(int);

    int ptr = 0;

    while(ptr<=sz-1)
    {
        swap(a[ptr],a[ptr+1]);
        ptr+=2;
        
    }

    for (size_t i = 0; i < sz; i++)
    {
        cout<<a[i] << " ";
    }
    
    


}