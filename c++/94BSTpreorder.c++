#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *l;
    node *r;
    node(int val)
    {
        data = val;
        l = NULL;
        r = NULL;
    }
};
node *build(int arr[], int *preid, int key, int min, int max, int n)
{
    if (*preid >= n)
        return NULL;
    node *root = NULL;
    if (key > min && key < max)
    {
        root = new node(key);
        *preid = *preid + 1;

        if (*preid < n)
        {
            root->l = build(arr, preid, arr[*preid], min, key, n);
        }
        if (*preid < n)
        {
            root->r = build(arr, preid, arr[*preid], key, max, n);
        }
    }

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
    int arr[] = {10, 2, 1, 13, 11};
    int n = 5;
    int preid = 0;

    node *root = build(arr, &preid, arr[0], INT_MIN, INT_MAX, n);
    preorder(root);

    return 0;
}