#include <iostream>
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

int search(int inorder[],int start,int end,int curr){
    // finding the pos of current in inorder

    for (int i=start;i<=end;i++){
        if(inorder[i]==curr) return i;
    }
    return -1;
}

Node* buildTree(int postorder[],int inorder[],int start,int end){
    static int idx=4;
    if (start>end){
        return NULL;
    }
    int curr=postorder[idx]; // storing the value in current variable
    idx--;

    Node* node= new Node(curr);

    if(start == end){ // this is done to check wether the left subtree and right subtree is there or not
    // because if start==end there is no left and right subtree
        return node;
    }
    
    // now we need to find the position of current in inorder
    // therefore we need to find the pos of current in inorder


    int pos=search(inorder,start,end,curr);

    node->right=buildTree(postorder,inorder,pos+1,end);
    node->left=buildTree(postorder,inorder,start,pos-1);
    return node;
}

void inorderPrint(Node* root){

    if(root==NULL){
        return;
    }
    inorderPrint(root->left);
    cout<<root->data<<" ";
    inorderPrint(root->right);

}

int main(){
     int postorder[]={4,2,5,3,1};
     int inorder[]={4,2,1,5,3};
     Node* root=buildTree(postorder,inorder,0,4);
     inorderPrint(root);
}