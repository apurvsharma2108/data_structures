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

int sumAtK(node* root,int k){
	if(root==NULL){
		return -1;
	}
	queue<node*> q;
	q.push(root);
	q.push(NULL);
	int level=0;				//current level indicator
	int sum=0;
	while(!q.empty()){ 						
		node* val=q.front();					
		q.pop();										
		if(val!=NULL){					//to check for 1 level 	at a time
			if(level==k){
				sum+=val->data;
			}
			if(val->left)								
				q.push(val->left);									
			if(val->right)
				q.push(val->right);
		}
		else if (!q.empty()){
			q.push(NULL);
			level++;														
		}									
	}
	return sum;
}

int main(){
	struct node* root=new node(1);
	root->left=new node(2);
	root->right=new node(3);
	root->left->left=new node(4);
	root->left->right=new node(5);
	root->right->left=new node(6);
	root->right->right=new node(7);
	
	cout<<sumAtK(root,2);
	return 0;
}
