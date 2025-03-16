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
node *LCA(node *root, int n1, int n2)
{
    if (root == NULL)
        return NULL;
    if (root->data == n1 || root->data == n2)
        return root;
    node *lee = LCA(root->l, n1, n2);
    node *ree = LCA(root->r, n1, n2);
    if (lee != NULL && ree != NULL)
        return root;
    if (lee == NULL && ree == NULL)
        return NULL;
    if (lee != NULL)
        return LCA(root->l, n1, n2);
    if (ree != NULL)
        return LCA(root->r, n1, n2);
}
int finddistance(node *root, int k, int dist)
{
    if (root == NULL)
        return -1;
    if (root->data == k)
        return dist;

    int lee = finddistance(root->l, k, dist + 1);
    if (lee != -1)
        return lee;
    int ree = finddistance(root->r, k, dist + 1);
    if (ree != -1)
        return ree;
}
int distancebetwnNode(node *root, int n1, int n2)
{
    node *lca = LCA(root, n1, n2);

    int d1 = finddistance(lca, n1, 0);
    int d2 = finddistance(lca, n2, 0);
    return d1 + d2;
}

int main()
{
    node *root = new node(1);
    root->l = new node(2);
    root->r = new node(3);
    root->l->l = new node(4);
    root->r->r = new node(5);

    cout << distancebetwnNode(root, 4, 5);
}