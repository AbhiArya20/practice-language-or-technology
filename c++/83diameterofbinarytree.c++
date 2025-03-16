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
int count2(node *root)
{
    if (root == NULL)
        return 0;

    return max(count2(root->l) , count2(root->r) )+1;
}
int count(node *root)
{
    if (root == NULL)
        return 0;

    return max((count2(root->l) + count2(root->r)) + 1, max(count(root->l), count(root->r)));
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
    cout << count(root);
}