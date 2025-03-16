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
int search(int in[], int st, int end, int cur)
{

    for (int i = st; i <= end; i++)
    {
        if (in[i] == cur)
        {
            return i;
        }
    }
}
struct node *build(int pre[], int in[], int st, int end)
{
    if (st > end)
        return NULL;
    static int id = 0;
    int cur = pre[id];
    id++;
    struct node *root = new node(cur);
    if (st == end)
        return root;
    int pos = search(in, st, end, cur);
    root->l = build(pre, in, st, pos - 1);
    root->r = build(pre, in, pos + 1, end);

    return root;
}
void traverse(struct node *temp)
{
    if (temp == NULL)
        return;

    traverse(temp->l);
    cout << temp->data << " ";
    traverse(temp->r);
}
int main()
{

    int pre[] = {1, 2, 4, 3, 5};

    int in[] = {4, 2, 1, 5, 3};

    struct node *temp = build(pre, in, 0, 4);
    traverse(temp);
}