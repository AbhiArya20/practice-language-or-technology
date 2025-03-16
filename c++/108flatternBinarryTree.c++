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
void flattern(Node *root)
{
    if (root == NULL || (root->left == NULL && root->right == NULL))
        return;
    if (root->left != NULL)
        flattern(root->left);
    Node *temp = root->right;
    root->right = root->left;
    root->left = NULL;

    Node *t = root->right;
    while (t->right != NULL)
    {
        t = t->right;
    }
    t->right = temp;

    flattern(root->right);
}
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->left = new Node(5);
    root->right->right = new Node(6);

    flattern(root);
}
