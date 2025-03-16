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

int sumrep(node *&root)
{
    if (root == NULL)
        return 0;

    root->data = (sumrep(root->l) + sumrep(root->r)) + root->data;
}
void traverse(node *root)
{
    if (root == NULL)
        return;
    cout << root->data<<" ";
    traverse(root->l);
    traverse(root->r);
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
    traverse(root);
    sumrep(root);
    cout<<endl;
    traverse(root);
}