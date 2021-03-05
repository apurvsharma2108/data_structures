#include<iostream>
using namespace std;
struct Node{
	int data;
	Node* prev;
	Node* next;
};
struct Node* head;
struct Node* getnewnode(int x){
	Node* newnode= new Node();
	newnode->data=x;
	newnode->prev=NULL;
	newnode->next=NULL;
	return newnode;
}
void inserthead(int x){
	
	Node* temp=getnewnode(x);
	if (head==NULL){
		head=temp;
		return;
	}
	head->prev=temp;
	temp->next=head;
	head=temp;
}
void insertlast(int x){
	struct Node* temp = head;
	struct Node* newnode = getnewnode(x);
	if(head == NULL) {
		head = newnode;
		return;
	}
	while(temp->next != NULL) temp = temp->next; // Go To last Node
	temp->next = newnode;
	newnode->prev = temp;
	
}
void print(){
	struct Node* temp=head;
	while(temp!=NULL){
		cout<<" "<<temp->data;
		temp=temp->next;
	}
	cout<<"\n";

}
int main(){
	head=NULL;
	insertlast(2); 
	insertlast(4);
	insertlast(6);   
	insertlast(8); 
	print(); 	
}
