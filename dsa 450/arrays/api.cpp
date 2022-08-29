#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <unordered_map>
#include<deque>
#include<queue>

#include<numeric>
using namespace std;

int main()
{
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    int sum = accumulate(begin(v), end(v), 0);
    cout<<sum;
    int res= INT_MAX;
    cout<<res ;
}