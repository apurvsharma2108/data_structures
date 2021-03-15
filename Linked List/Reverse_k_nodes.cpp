#include<bits/stdc++.h>
using namespace std;


struct node
{
    int data;
    struct node* next;
    
    node(int x){
        data = x;
        next = NULL;
    }
    
};

/* Function to print linked list */
void printList(struct node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}


 // } Driver Code Ends
/*
  Reverse a linked list
  The input list will have at least one element  
  Return the node which points to the head of the new LinkedList
  Node is defined as 
    struct node
    {
        int data;
        struct node* next;
    
        node(int x){
            data = x;
            next = NULL;
        }
    
    }*head;
*/

class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
      node *current,*prev,*nex;
      current =head;
      prev=NULL;
      int c=0;
      while(current!=NULL and c<k){
          nex=current->next;
          current->next=prev;
          prev=current;
          current=nex;
          c++;
      }
      if(nex!=NULL){
          head->next=reverse(nex,k);
      }
      return prev;
      
    }
     
    };



// { Driver Code Starts.

/* Drier program to test above function*/
int main(void)
{
    int t;
	cout<<"enter the number of times you want to run the loop ";
    cin>>t;
    
    while(t--)
    {
        struct node* head = NULL;
        struct node* temp = NULL;
        int n;
        cout<<"Enter the size ";
        cin >> n;
        cout<<"Enter the value ";
        for(int i=0 ; i<n ; i++)
        {
            int value;
            
            cin >> value;
            if(i == 0)
            {
                head = new node(value);
                temp = head;
            }
            else
            {
                temp->next = new node(value);
                temp = temp->next;
            }
        }
        
        int k;
        cout<<"Enter the dividing point ";
        cin>>k;
        
        Solution ob;
        head = ob.reverse(head, k);
        printList(head);
    }
     
    return(0);
}

  // } Driver Code Ends
