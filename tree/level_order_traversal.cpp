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

void printLevelOrder(node* root){			
	if(root==NULL){							
		return;
	}
	queue<node*>q;				
	q.push(root);
	q.push(NULL);				//check for a level at a time
	while(!q.empty()){
		node* val=q.front();			//store the upcoming value in node pointer;
		q.pop();
		if (val!=NULL){
			cout<<val->data<<" ";
		if(val->left)
			q.push(val->left);			// if not val push in q the val
		if(val->right)
			q.push(val->right);			//push in q the val
	}
	else if (!q.empty())				//q.top ==null check if q is not empty
		q.push(NULL);
	}
}



int main(){
	struct node* root=new node(1);
	root->left=new node(2);
	root->right=new node(3);
	root->left->left=new node(4);
	root->left->right=new node(5);
	root->right->left=new node(6);
	root->right->right=new node(7);
	
	printLevelOrder(root);
	return 0;
}
