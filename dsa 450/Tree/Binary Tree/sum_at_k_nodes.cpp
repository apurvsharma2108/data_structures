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

int sum_k_level(Node* root,int k){
    if(root==NULL) return -1;

    int sum=0;
    int level=0;
    queue<Node*> q;
    q.push(root);
    q.push(NULL); // q will look like this  [1,NULL]

    while(!q.empty()){
        Node* node= q.front(); // 1 wiill be popped out
        q.pop();

        if(node!=NULL){
            if(level==k){
                sum+=node->data;
            }
            if(node->left){
                q.push(node->left);
            }
            if(node->right){
                q.push(node->right);
            }
        }
        else if(!q.empty()){ // if q is not empty and node ==null
            q.push(NULL);
            level++;
        }
    }

    return sum;
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

     cout<<sum_k_level(root,2);
     return 0;

}