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
void findpointer(Node *root, Node **first, Node **last, Node **mid, Node **prev)
{
    if (root == NULL)
        return;
    findpointer(root->left, first, last, mid, prev);
    if (*prev && root->data < (*prev)->data)
    {
        if (!*first)    
        {
            *first = *prev;
            *mid = root;
        }
        else                            
            *last = root;
    }
    else
        *prev = root;

    findpointer(root->right, first, last, mid, prev);
}
void restoreBST(Node *root)
{
    if (root == NULL)
        return;
    Node *first = NULL, *mid = NULL, *last = NULL, *prev = NULL;

    findpointer(root, &first, &last, &mid, &prev);

    if (first && last)
        swap(first->data, last->data);
    else
        swap(first->data, mid->data);
}
void preorder(Node *root)
{
    if (root == NULL)
        return;
    preorder(root->left);
    cout << root->data << " ";
    preorder(root->right);
}
int main()
{ Node *root = new Node(6);
    root->left = new Node(9);
    root->right = new Node(3);
    root->left->left = new Node(1);
    root->left->right = new Node(4);
    root->right->right = new Node(13);
    preorder(root);
    cout<<endl;
    restoreBST(root);
    preorder(root);
}