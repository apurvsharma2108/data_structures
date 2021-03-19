#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};



bool isPalindrome(Node *head);
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
   	cout<<isPalindrome(head)<<endl;
    }
    return 0;
}

// } Driver Code Ends


/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
/*You are required to complete this method */
Node* reverse(Node* head){
    Node* current=head,*prev=NULL,*next;
    while(current!=NULL){
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    return prev;
}    
bool isPalindrome(Node *head)
{
    Node* fast=head;
    Node* slow=head;
    if(head==NULL and head->next==NULL){
        return true;
    }
    while(fast->next and fast->next->next){
        slow=slow->next;
        fast=fast->next->next;
    }
    slow->next=reverse(slow->next);
    slow=slow->next;
    while(slow!=NULL){
        if (head->data!=slow->data){
            return false;
        }
        slow=slow->next;
        head=head->next;
    }
    return true;
}
