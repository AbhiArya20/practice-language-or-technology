#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *l, *r;

    node(int val)
    {
        data = val;
        l = r = NULL;
    }
};

node *build(int arr[], int s, int n)
{
    if (s > n)
        return NULL;
    int mid = (s + n) / 2;
    node *root = new node(arr[mid]);
   root->l= build(arr, s, mid - 1);
   root->r = build(arr, mid + 1, n);
    
    return root;
}
void preorder(node *root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    preorder(root->l);
    preorder(root->r);
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
  

    node *root = build(arr, 0,4);
    preorder(root);
}