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
int count(node *root)
{
    if (root == NULL)
        return 0;

    return (count(root->l) + count(root->r)) + 1;
}
int sum(node *root)
{
    if (root == NULL)
        return 0;

    return (sum(root->l) + sum(root->r)) + root->data;
}
int main()
{
    node *root = new node(1);
    root->l = new node(2);
    root->r = new node(3);
    root->l->l = new node(4);
    root->l->r = new node(5);
    root->r->l = new node(6);
    root->r->r = new node(7);

    // cout << count(root);
    cout << sum(root);
}