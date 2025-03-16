#include <iostream>
#include <climits>
using namespace std;
class Node
{
public:
    int data;
    Node *left, *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
Node *build(int arr[], int s, int e)
{
    if (s > e)
        return NULL;

    int mid = (s + e) / 2;
    Node *root = new Node(arr[mid]);

    root->left = build(arr, s, mid - 1);
    root->right = build(arr, mid + 1, e);
    return root;
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
    int arr[]={10,20,30,40,50};
    Node* root= build(arr, 0, 4);
    preorder(root);
}