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
// int height(Node *root)
// {
//     if (root == NULL)
//         return 0;

//     return (max(height(root->left), height(root->right)) + 1);
// }
bool check(Node *root, int *height)
{
    if (root == NULL)
    {
        *height = 0;
        return true;
    }
    int l = 0, r = 0;
    if (!check(root->left, &l) || !check(root->right, &r))
        return false;

    *height = max(l, r) + 1;
    if ((l - r) <= 1)
        return true;
    return false;
}
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    // root->left->right = new Node(5);
    // root->right->left = new Node(6);
    // root->right->right = new Node(7);
    int height = 0;
    cout << check(root, &height);
}