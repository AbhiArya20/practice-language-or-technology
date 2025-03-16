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
void print(node *root)
{
    if (root == NULL)
        return;
    queue<node *> q1;
    q1.push(root);
    q1.push(NULL);
    while (!q1.empty())
    {
        node *tem = q1.front();
        if (!q1.empty() and q1.front() != NULL)
        {
            if (tem->l)
                q1.push(tem->l);
            if (tem->r)
                q1.push(tem->r);
        }
        q1.pop();
        if (q1.front() == NULL)
        {
            cout << tem->data << " ";
            q1.pop();
            q1.push(NULL);
        }
    }
}

int main()
{
    node *root = new node(1);
    root->l = new node(2);
    root->r = new node(3);
    root->l->l = new node(4);
    root->l->r = new node(5);
    root->r->l = new node(6);
    root->r->l->l = new node(6);
    root->r->r = new node(7);
    root->r->r->l = new node(8);

    print(root);
}