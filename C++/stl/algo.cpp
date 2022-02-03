#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;
int main(){
    int n;
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(4);
    v.push_back(9);
    cout<<binary_search(v.begin(),v.end(),2);

    string s="abcd";
    reverse(s.begin(),s.end());
    cout<<s;
}