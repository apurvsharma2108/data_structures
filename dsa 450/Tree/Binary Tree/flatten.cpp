#include<iostream>
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

void flatten(node* root){
	
	if(root==NULL||root->left==NULL||root->right==NULL){
		return ;
	}
	
	if(root->left!=NULL){
		flatten(root->left);	//step1 flatten left and right subtree
		
			
	node* temp=root->right;		//step2 store the right part of tree in temp
	root->right=root->left;
	root->left=NULL;
								//root ki right pe pehle left phir right
	node* t= root->right;		//step3 here node->right is preivous node->left 
	//here we have stored the right part in t because at the tail of t temp will append 
	while(t->right!=NULL){				//to reach the end of t
		t=t->right;
	}
	t->right=temp;				//end we connect the right part of tree

	}
	flatten(root->right);
	
}
void inorder(node* root){
	if(root==NULL){
		return;
	}
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}


int main(){
	struct node* root=new node(4);
	root->left=new node(9);
	root->right=new node(5);
	root->left->left=new node(1);
	root->left->right=new node(3);
	root->right->right=new node(6);
	
	flatten(root);
	inorder(root);
	cout<<endl;
	
	return 0;
}