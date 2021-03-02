#include<iostream>
using namespace std;
struct Node{
	int data;
	Node* next;
};
Node* head;//create a node * to store adress of 1st variable
void insert(int x){
	Node* temp1=new Node();
	temp1 ->data=x;
	temp1 ->next=head;
	head=temp1;
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
	int n,x;
	cout<<"How many numbers ";
	cin>>n;
	for (int i=0;i<=n-1;i++){
		cout<<" enter the number ";
		cin>>x;
		insert(x);
		print();
	}
}
