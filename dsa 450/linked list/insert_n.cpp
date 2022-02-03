#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node* next=NULL;
};
Node* head;

void insert(int x,int n){

    Node* temp1=new Node();
    temp1->data=x;
    temp1->next=NULL;

    if(n==1){
        temp1->next=head;
        head=temp1;
        return;
    }
    Node* temp2=head;
    for(int i=0;i<n-2;i++){
        temp2=temp2->next;
    }
    temp1->next=temp2->next;
    temp2->next=temp1;
}
void print(){
    cout<<"list is";
    Node* temp=head;
    while(temp!=NULL){
        cout<<" "<<temp->data;
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    int n;
    head=NULL;
    insert(1,1);
    insert(2,1);
    insert(3,2);
    insert(5,2);
    insert(6,3);
    print();


}