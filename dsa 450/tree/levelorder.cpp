#include <iostream>
#include <queue>
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

void levelorder(Node* root){
    if(root==NULL) return;

    queue<Node*> q;
    q.push(root);
    q.push(NULL); // q will look like this  [1,NULL]

    while(!q.empty()){
        Node* node= q.front(); // 1 wiill be popped out
        q.pop();

        if(node!=NULL){
            cout<<node->data<<" "; // 1 will be printed
            if(node->left){
                q.push(node->left);
            }
            if(node->right){
                q.push(node->right);
            }
        }
        else if(!q.empty()){ // if q is not empty and node ==null
            q.push(NULL);
        }
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

     levelorder(root);
     return 0;

}