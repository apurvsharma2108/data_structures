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
void reverse_ll(Node* p){
	if(p->next==NULL){
		head=p;
		return;
	}
	reverse_ll(p->next);
	struct Node* q=p->next;
	q->next=p;
	p->next=NULL;				//making it null at every node				
}
void print(Node* head){
	if (head==NULL){
		return;
	}
	cout<<" "<<head->data;
	print(head->next);
}
int main(){
	head=NULL;
	head=insert(head,1);
	head=insert(head,2);
	head=insert(head,3);
	head=insert(head,4);
	head=insert(head,5);
	head=insert(head,6);
	reverse_ll(head);
	print(head);
}
