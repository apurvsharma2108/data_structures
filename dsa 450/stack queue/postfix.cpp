#include <iostream>
#include <stack>
#include <math.h>
using namespace std;

int posti(string s){
    stack<int> st;
    for(int i=0;i<=s.length()-1;i++){
        if (s[i]>='1' && s[i]<='9'){
            st.push(s[i]-'0');
        }
        else{
            int op2=st.top();
            st.pop();
            int op1=st.top();
            st.pop();

            switch (s[i])
            {
            case '+':
                st.push(op1+op2);
                break;
            case '-':
                st.push(op1-op2);
                break;
            case '*':
                st.push(op1*op2);
                break;
            case '/':
                st.push(op1/op2);
                break;
            
            case '^':
                st.push(op1^op2);
                break;
            }
        }

    }
    return st.top();
}
int main(){
     int n;

     cout<<posti("46+2/5*7+")<<endl;
}