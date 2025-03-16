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
int height(node *root)
{
    if (root == NULL)
        return 0;
    return max(height(root->l), height(root->r))+1;
}
bool detect(node *root)
{
    if (root == NULL)
        return true;
    if (detect(root->l) == false)
        return false;
    if (detect(root->r) == false)
        return false;
    if (abs(height(root->l) - height(root->r)) <= 1)
        return true;

    return false;
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
    cout << detect(root);
}