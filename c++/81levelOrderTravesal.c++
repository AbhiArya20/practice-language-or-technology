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
        if (!q1.empty() and q1.front() != NULL)
        {
            node *tem = q1.front();
            cout << tem->data << " ";
            if (tem->l != NULL)
                q1.push(tem->l);
            if (tem->r != NULL)
                q1.push(tem->r);
            q1.pop();
        }
        else if (q1.front() == NULL)
        {
            q1.pop();
            q1.push(NULL);
        }
    }
}
int sumofNodeatKlevel(node *root, int k)
{
    if (root == NULL)
        return -1;
    queue<node *> q1;
    q1.push(root);
    q1.push(NULL);
    int count = 0;
    int sum = 0;
    while (!q1.empty())
    {
        node *tem = q1.front();
        q1.pop();
        if (tem != NULL)
        {
            if (count == k)
                sum += tem->data;
            if (tem->l)
                q1.push(tem->l);
            if (tem->r)
                q1.push(tem->r);
        }
        else if (!q1.empty())
        {
            q1.push(NULL);
            count++;
                }
    }
    return sum;
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
   

    print(root);
    // cout << sumofNodeatKlevel(root, 2);
}