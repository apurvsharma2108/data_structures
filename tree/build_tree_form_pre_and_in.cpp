#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	struct node* left;
	struct node* right;
	node(int val){
		data=val;
		left=NULL;
		right=NULL;
	}
};

int search(int inorder[],int start,int end,int curr){
	for(int i=start;i<=end;i++){
		if (inorder[i]==curr){
			return i;
		}
	}
	return -1;
}

node* buildTree(int preorder[],int inorder[],int start,int end){
	static int idx=0;
	
	//base cond.
	if (start>end){
		return NULL;
	}
	
	int curr=preorder[idx];
	idx++;
	node* Node=new node(curr);
	
	if(start==end){
		return Node;
	}
	
	int pos=search(inorder,start,end,curr);
	Node->left=buildTree(preorder,inorder,start,pos-1);
	//build tree called for left subtree therefore end=pos-1
	Node->right=buildTree(preorder,inorder,pos+1,end);
	//build tree called for left subtree therefore start=pos+1
	return Node;
}

void preorderprint(node* root){
	if(root==NULL){
		return ;
	
	}
	cout<<root->data<<" ";
	preorderprint(root->left);
	preorderprint(root->right);
}
void inorderprint(node* root){
	if(root==NULL){
		return ;
	}
	inorderprint(root->left);
	cout<<root->data<<" ";
	inorderprint(root->right);
}

int main(){
	int preorder[]={1,2,4,5,3,6,7};
	int inorder[]={4,2,5,1,6,3,7};
	int size = sizeof(preorder)/sizeof(preorder[0]);
	node* root=buildTree(preorder,inorder,0,size-1);
	cout<<"Preorder is ";
	preorderprint(root);
	cout<<endl;
	cout<<"Inorder is ";
	inorderprint(root);
	
	return 0;
}
