#include <iostream>
using namespace std;
#include <vector>
#include <map>
#include <queue>

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
//link to the video: https://www.youtube.com/watch?v=JMBFm__krXw
//creating empty queue for level order traversal;
vector<int> top_view(Node* root){
    vector<int>ans;
    Node* temp=NULL;
    queue<pair<Node*,int>>q; // queue is used for level order travesal
    map<int,int>m;// map is used for stroing only top view values

    q.push({root,0});
    //storing temp->data in map.

    while(!q.empty()){
         // code for first element
        temp=q.front().first; // node ka value
        int hd=q.front().second; // horizantal distance
        q.pop();

        // ye if check karega ki map mein ye wala horizontal distance present he ki nahi 
        //agar nahii he to ise add kar dega map mein
        
        if (m.find(hd)==m.end()){
            m[hd]=root->data;
        }
        if(root->left){
            q.push({temp->left,hd-1}); //root ka left therefore hd-1
        }
        if(root->right){
            q.push({temp->right,hd+1}); //root ka right therefore hd+1
        }

    }
    for(auto it=m.begin();it!=m.end();it++){
           ans.push_back(it->second);
       }
       return ans;
}

int main(){
     int n;
     struct Node* root=new Node(1);
     root->left=new Node(2);
     root->right=new Node(3);
     root->left->left=new Node(4);
     root->left->right=new Node(5);
     root->right->left=new Node(6);
     root->right->right=new Node(7);
     return 0;

}