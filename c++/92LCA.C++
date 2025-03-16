#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *r;
    node *l;
    node(int val)
    {
        data = val;
        r = NULL;
        l = NULL;
    }
};
bool getpath(node *root, int n, vector<int> &path)
{
    if (root == NULL)
        return false;

    path.push_back(root->data);
    if (root->data == n)
        return true; 
    if (getpath(root->l, n, path) || getpath(root->r, n, path))
        return true;

    path.pop_back();
    return false;
}
int LCA(node *root, int n1, int n2)
{
    vector<int> path1, path2;

    if (!getpath(root, n1, path1) || !getpath(root, n2, path2))
        return -1;

    int pc;

    for (pc = 0; pc < path1.size() && path2.size(); pc++)
    {
        if (path1[pc] != path2[pc])
            break;
    }
    return path1[pc - 1];
}
int main()
{
    node *root = new node(1);
    root->l = new node(2);
    root->r = new node(3);
    root->l->l = new node(4);
    root->r->l = new node(5);
    root->r->r = new node(6);
    root->r->l->l = new node(7);

    int k = LCA(root, 7, 6);
    cout << k;
}