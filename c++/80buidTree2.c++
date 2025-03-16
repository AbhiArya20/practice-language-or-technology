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

    for (int i = st; i >= end; i--)
    {
        if (in[i] == cur)
        {
            return i;
        }
    }
}
struct node *build(int pos[], int in[], int st, int end)
{
    if (st > end)
        return NULL;
    static int id = end;
    int cur = pos[id];
    id--;
    struct node *root = new node(cur);
    if (st == end)
        return root;
    int posi = search(in, st, end, cur);
    root->l = build(pos, in, posi + 1, end);
    root->r = build(pos, in, st, posi - 1);

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

    int pos[] = {4, 2, 5, 3, 1};

    int in[] = {4, 2, 1, 5, 3};

    struct node *temp = build(pos, in, 0, 4);
    traverse(temp);
}