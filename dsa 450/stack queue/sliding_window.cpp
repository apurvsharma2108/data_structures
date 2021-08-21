#include<iostream>
#include <vector>
#include <deque>
using namespace std;
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& a, int k) {
        
        int n=a.size();
        vector<int> ans;
        deque<int> dq;
        int i=0;
        for (; i < k; i++) // for the first k elemnts are pushed first 
        {
            
            while(!dq.empty() && a[dq.back()]<=a[i]){
                dq.pop_back();
            }
            dq.push_back(i);
        }

        for (; i < n; i++) //i+k se loop age baddta he
        {
            ans.push_back(a[dq.front()]);

            while (!dq.empty() && dq.front()<=i-k)
            {
                dq.pop_front();
            }
            while(!dq.empty() && a[dq.back()]<=a[i]){ // above loop copied
                dq.pop_back();
            }
            dq.push_back(i); 
        }

        ans.push_back(a[dq.front()]);
        return ans;
        
        
        
    }
};