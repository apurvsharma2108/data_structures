#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

vector<int> levelorder(Node* root){
    vector<int>v;
    
    queue<Node*> q;

    q.push(root);
    q.push(NULL); // q will look like this  [1,NULL]

    while(!q.empty())
    {
        Node* temp= q.front(); // 1 wiill be popped out
        q.pop();

        if(temp!=NULL)
        {
        
            v.push_back(temp->data);

            if(temp->left)
            {
                q.push(temp->left);
            }
            
            if(temp->right)
            {
                q.push(temp->right);
            }
        
        }
        else if(!q.empty())     // if q is not empty and node ==null
        { 
            
            q.push(NULL);
            v.push_back(-1);
        
        }
    }
    
    return v;
}



int main(){
     int n;
     vector<int>a;
     struct Node* root=new Node(1);
     root->left=new Node(2);
     root->right=new Node(3);
     root->left->left=new Node(4);
     root->left->right=new Node(5);
     root->right->left=new Node(6);
     root->right->right=new Node(7);

     a=levelorder(root);
     for(int i : a)
     {
         if(i==-1) cout<<endl;
         else cout<<i<<" ";

     }
     
     return 0;

}