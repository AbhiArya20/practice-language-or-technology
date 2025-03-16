#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
map<int, vector<int>> mp;
void print(Node *root, int hd)
{
    if (root == NULL)
        return;
    mp[hd].push_back(root->data);
    print(root->left, hd - 1);
    print(root->right, hd + 1);
}
int main()
{
    Node *root = new Node(10);
    root->left = new Node(7);
    root->left->right = new Node(11);
    root->left->left = new Node(3);
    root->right = new Node(4);
    root->right->right = new Node(6);
    root->right->left = new Node(14);
    print(root, 0);
    map<int, vector<int>>::iterator it;
    for (it = mp.begin(); it != mp.end(); it++)
    {
        for (int i = 0; i < it->second.size(); i++)
        {
            cout<<it->second[i]<<" ";
        }
        cout<<endl;
    }
}