#include <iostream>
using namespace std;

struct Node
{
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
        Node* temp2=head;
        while(temp2->next!=NULL){
            temp2=temp2->next;
        }
        temp2->next=temp;
    }
    return head;
}


Node* reverse(Node* head){
     Node* current,*prev,*next;
     current=head;
     prev=NULL;
     while(current!=NULL){
         next=current->next;
         current->next=prev;
         prev=current;
         current=next;
     }
     head=prev;
     return head;
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
    head=insert(head,2);
	head=insert(head,4);
	head=insert(head,6);
	head=insert(head,8);
	head=insert(head,10);
	head=insert(head,12);
    head=reverse(head);
    print(head);
}