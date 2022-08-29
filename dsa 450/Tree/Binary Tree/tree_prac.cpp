#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <unordered_map>
#include<deque>
#include<queue>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }

};

vector<int> levelorder(Node* root)
{
    vector<int> v;
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node* temp = q.front();
        q.pop();

        if (temp!=NULL)
        {
            v.push_back(temp->data);

            if (temp->left)
            {
                q.push(temp->left);
            }
            
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
        else if (!q.empty())
        {
            q.push(NULL);
            v.push_back(-1);
        }
    }

    return v;

}



int main()
{

    vector <int> ans ;
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    ans = levelorder(root);

    for (auto i : ans )
    {
        cout << i<<" ";
    }
}



 