#include<iostream>
using namespace std;
struct Node{
	int data;
	Node* next;
};
struct Node* head;
Node* insert(Node* head,int data){
	Node* temp=new Node();
	temp->data=data;
	temp->next=NULL;
	if (head==NULL){
		head=temp;
	}
	else{
		Node*temp2=head;
		while(temp2->next!=NULL){
			temp2=temp2->next;
		}
		temp2->next=temp;
	}
	return head;
}
void print(Node* head){
	if (head==NULL){
		return;
	}
	cout<<" "<<head->data<<" -> ";
	print(head->next);
}
void rev_print(Node* head){
	if (head==NULL){
		return;
	}
	rev_print(head->next);
	cout<<" "<<head->data<<" -> ";
}
int main(){
	head=NULL;
	head=insert(head,1);
	head=insert(head,2);
	head=insert(head,3);
	head=insert(head,4);
	head=insert(head,5);
	print(head);
	cout<<endl;;
	rev_print(head);
}
