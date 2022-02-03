#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node* head;
int insert(int x){
    Node* temp=new Node();
    temp->data=x;
    temp->next=head;
    head=temp;
}
void print(){
    cout<<"the list is";
    Node*temp=head;
    while (temp!=NULL){
        cout<<" "<<temp->data;
        temp=temp->next;
    }
    cout<<endl;

}

int main(){
    head=NULL;
    int n,x;
    cout<<"how mny no.s";
    cin>>n;
    for (size_t i = 0; i < n; i++)
    {
        cout<<"enter the no.";
        cin>>x;
        insert(x);
        print();
    }
    
}