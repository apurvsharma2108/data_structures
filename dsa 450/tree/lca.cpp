#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }

};

class Solution {
public:
    Node* lowestCommonAncestor(Node* root, Node* p, Node* q) {
        
        if(root==NULL) return NULL;
        
        if(root==p || root==q) return root; // base condition for recursion
        
        Node* left =lowestCommonAncestor(root->left,p,q);
        Node* right =lowestCommonAncestor(root->right,p,q);
        
        if(left!=NULL && right!=NULL) {
            return root;
        }
        if(left==NULL && right==NULL)
            return NULL;

        if(left!=NULL){
            return left;
        }
        else{
            return right;
        }
        
    }
};
int main(){
     int n;
}