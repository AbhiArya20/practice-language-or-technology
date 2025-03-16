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
void flat(node *root)
{
  
    if (root == NULL || root->l == NULL && root->r == NULL)
        return;
    if (root->l != NULL)
    {
        flat(root->l);
        node *temp = root->r;
        root->r = root->l;
        root->l == NULL;

        node *temp2 = root->r;
        while (temp2->r != NULL)
        {
            temp2 = temp2->r;
        }
        temp2->r = temp;
    }
    flat(root->r);
 
}
void traverse(node *root)
{
    if (root == NULL)
        return;
    traverse(root->l);
    cout << root->data << " ";
    traverse(root->r);
}
int main()
{
    node *root = new node(4);
    root->l = new node(9);
    root->r = new node(5);
    root->l->l = new node(1);
    root->l->r = new node(3);
    root->r->r = new node(6);

    flat(root);
    traverse(root);

    return 0;
}