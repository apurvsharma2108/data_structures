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

int calcHeight(node* root){
	if(root==NULL){
		return -1;
	}
	int lHeight=calcHeight(root->left);
	int rHeight=calcHeight(root->right);
	return max(lHeight,rHeight)+1;            //height of tree with 1 node is 0;
}

int diameter(node* root,int* height){
	if (root==NULL){
		
		*height=0;					
		return 0;
	}
	int lh=0,rh=0; //first we calculate the height of left subtree and right subtree
	int ldia=diameter(root->left,&lh);		//diameter of left subtree
	int rdia=diameter(root->right,&rh);		//diameter of right subtree
	int currdia=lh+rh+1;
	*height=max(lh,rh)+1;
	return max(currdia,max(ldia,rdia));
}

int main(){
	struct node* root=new node(1);
	root->left=new node(2);
	root->right=new node(3);
	root->left->left=new node(4);
	root->left->right=new node(5);
	root->right->left=new node(6);
	root->right->right=new node(7);
	
	cout<<"the height is "<<calcHeight(root);
	int height=0;
	cout<<endl;
	cout<<"the diameter is "<<diameter(root,&height)<<" ";
	return 0;
}
