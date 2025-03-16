#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *left, *right;
    node(int val)
    {
        data = val;
        left = right = NULL;
    }
};
void calcupointer(node *root, node **first, node **last, node **mid, node **pre)
{
    if (root == NULL)
        return;

    calcupointer(root->left, first, last, mid, pre);
    if (*pre && root->data < (*pre)->data)
    {
        if (!*first)
        {
            *first = *pre;
            *mid = root;
        }
        else
        {
            *last = root;
        }
    }
    *pre = root;
    calcupointer(root->right, first, last, mid, pre);
}
void restore(node *root)
{
    node *first, *last, *mid, *pre;
    first = last = mid = pre = NULL;

    calcupointer(root, &first, &last, &mid, &pre);

    if (first && last)
        swap(first->data, last->data);
    else if (first && mid)
        swap(first, mid);
    return;
}
void inorder(node *root)
{
    if (root == NULL)
        return;

    inorder(root->left);
    cout << root->data<<" ";
    inorder(root->right);
}
int main()
{
    node *root = new node(6);
    root->left = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(1);
    root->right = new node(9);
    root->right->right = new node(13);

    inorder(root);cout<<endl;
    restore(root);
    inorder(root);
}