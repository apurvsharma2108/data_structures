#include<iostream>
using namespace std;
struct node{
	int data;
	node* next;
};
struct node* head;
void push(int x){
	node* temp=new node();
	temp->data=x;
	temp->next=head;
	head=temp;
}
int pop(){
	if (head==NULL){
		return false;
	}
	node* temp=head;
	head=temp->next;
	delete(temp);
}
void print(){
	cout<<"Stack is "<<endl;
	node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<endl;
		temp=temp->next;
	}
}
int main(){
	head=NULL;
	push(2);print();
	push(3);print();
	push(4);print();
	push(5);print();
	push(6);print();
	pop();print();
	pop();print();
	pop();print();
}
