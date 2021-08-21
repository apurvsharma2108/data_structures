#include <iostream>
#include <stack>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

void  itreative_pre(Node* root){
    stack<Node*> st;
    if(root==NULL) return;

    st.push(root);
    while(!st.empty()){
        Node* temp=st.top();
        st.pop();
        cout<<temp->data<<" ";
        if(temp->right)
            st.push(temp->right);
        if(temp->left)
            st.push(temp->left);
    }
}
 
int main(){
     int n;
     struct Node* root=new Node(1);
     root->left=new Node(2);
     root->right=new Node(3);
     root->left->left=new Node(4);
     root->left->right=new Node(5);
     root->right->left=new Node(6);
     root->right->right=new Node(7);
     itreative_pre(root);
     cout<<endl;
     
     cout<<endl;
     return 0;

}