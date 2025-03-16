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
        l = r = NULL;
    }
};
void zigzag(node *root)
{
    if (root == NULL)
        return;
    stack<node *> cur;
    stack<node *> next;
    bool L2R = true;
    cur.push(root);
    while (!cur.empty())
    {
        node *temp = cur.top();
        cur.pop();
        if (temp)
        {
            cout << temp->data << " ";

            if (L2R)
            {
                if (root->l)
                    next.push(root->l);
                if (root->r)
                    next.push(root->r);
            }
            else
            {
                if (root->r)
                    next.push(root->r);
                if (root->l)
                    next.push(root->l);
            }
        }
        if (cur.empty())
        {
            L2R = !L2R;
            swap(cur, next);
        }
    }
}
int main()
{
    node *root = new node(12);
    root->l = new node(9);
    root->r = new node(15);
    root->l->l = new node(5);
    root->l->r = new node(10);

    zigzag(root);

    return 0;
}