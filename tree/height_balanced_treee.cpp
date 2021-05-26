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

int height(node* root){
	if(root==NULL){					//height of leaf node will be zero
		return 0;
	}
	
	int lh=height(root->left);
	int rh=height(root->right);
	return max(lh,rh)+1;
}

bool isbalanced(node* root,int* height){
	if(root==NULL){
		return true;
	}
	int lh=0,rh=0;
	if(isbalanced(root->left,&lh)==false)
		return false;
	if(isbalanced(root->right,&rh)==false)
		return false;
	
	*height=max(lh,rh)+1;
	if(abs(lh-rh)<=1)
		return true;
	else
		return false;
}

int main(){
	struct node* root=new node(1);
	root->left=new node(2);
	root->right=new node(3);
	root->left->left=new node(4);
	root->left->right=new node(5);
	root->right->left=new node(6);
	root->right->right=new node(7);
	
	node* root2=new node(1);
	root2->left=new node(2);
	root2->left->left=new node(3);
	
	int height=0;
	
	if(isbalanced(root,&height)){
		cout<<"Balanced Tree";
	}
	else{
		cout<<"UNBALANCED TREE";
	}
	cout<<endl;
	if(isbalanced(root2,&height)){
		cout<<"Balanced Tree";
	}
	else{
		cout<<"UNBALANCED TREE";
	}
	
	
	return 0;
}
