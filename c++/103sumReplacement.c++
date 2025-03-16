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
int sumReplacement(Node *root)
{

    if (root == NULL)
        return 0;

    root->data = sumReplacement(root->left) + sumReplacement(root->right) + root->data;

    return root->data;
}

void preorder(Node *root)
{
    if (root == NULL)
        return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right = new Node(3);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    preorder(root);
    cout<<endl;
    sumReplacement(root);
    preorder(root);

}