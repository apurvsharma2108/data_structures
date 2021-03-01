#include<iostream>
using namespace std;
struct Node{
	int data;
	Node* next;
};
Node *head;
void insert(int n){
	Node* temp1=new Node();
	temp1->data=n;
	temp1->next=head;
	head=temp1;
}
void del(int pos){
	Node* temp1=head;
	if (pos==1){
		head=temp1->next;
		delete(temp1);
		return;
	}
	for(int i=0;i<pos-2;i++){
		temp1=temp1->next;	
	}
	Node* temp2=temp1->next;
	temp1->next=temp2->next;
	delete(temp2);
}
void print(){
	Node* temp=head;
	cout<<"List is";
	while(temp!=NULL){
		cout<<" "<<temp ->data;
		temp=temp->next;
	}
	cout<<"\n";
}
int main(){
	head=NULL;
	insert(1);
	insert(2);
	insert(3);
	insert(4);
	insert(5);
	print();
	del(4);
	print();
	del(1);
	print();
	del(2);
	print();
	del(2);
	print();
	del(1);
	print();
}
