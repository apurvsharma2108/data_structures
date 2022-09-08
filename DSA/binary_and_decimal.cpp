#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <math.h>
#include <unordered_map>
#include<deque>
#include<queue>
using namespace std;

// decimal to binary
//     - div by 2
//     - store rem in ans
//     - repeat above 2 steps until rem != 0
//     - reverse answer 

int main()
{
    // decimal to binary

    int n;
    int abc;
    cin >> n;
    int ans = 0;
    int i = 0;

    while (n!=0)
    {
        int bit = n & 1;
        ans = ( bit * pow(10,i) )+ans;
        n = n>>1;
        i++;
    }

    cout<<ans;
    
}