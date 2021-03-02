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
	cout<<"List is:";
	while(temp!=NULL){
		cout<<" "<<temp ->data<<"->";
		temp=temp->next;
	}
	cout<<"\n";
}
int main(){
	head=NULL;
	cout<<"Enter 1 for Insert \nEnter 2 for deletion \nEnter 3 for print ";
	while(1){
		cout<<"\nEnter your choice ";
		int choice;
		cin>>choice;
		if (choice==1){
			int n;
			cout<<"enter number ";
			cin>>n;
			insert(n);
		}
		else if(choice==2){
			int pos;
			cout<<"enter position";
			cin>>pos;
			del(pos);
		}
		else if (choice==3){
			print();
		}
		else{
			break;
		}
	}
}
