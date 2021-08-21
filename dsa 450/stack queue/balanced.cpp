#include <iostream>
#include <stack>
#include <math.h>
using namespace std;
bool balance(string s){
    stack<char> st;
    bool ans=true;
    int n=s.size();
    for (size_t i = 0; i <=n-1; i++)
    {
        if(s[i]=='{' || s[i]=='[' || s[i]=='('){
            st.push(s[i]);
        }
        else if (s[i]=='}'){
            if(!st.empty() && st.top()=='{'){ // !st.empty() is important
                st.pop();
            }
            else{
                ans=false;
                break;
            }
        }
        else if (s[i]==')'){
            if(!st.empty() && st.top()=='('){
                st.pop();
            }
            else{
                ans=false;
                break;
            }
        }
        else if (s[i]==']'){
            if(!st.empty() && st.top()=='['){
                st.pop();
            }
            else{
                ans=false;
                break;
            }
        }
    }
        if(!st.empty()){
            return false;
        }
        return ans;
}
int main(){
    string s="[)()]";
    if(balance(s)){
        cout<<"valid";
    }
    else{
        cout<<"invalid";
    }

}
