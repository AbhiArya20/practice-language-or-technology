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

int max1(node *root, int ans)
{

    if (root == NULL)
        return 0;
    int a1 = root->data;
    int a2 = max1(root->l, ans);
    int a3 = max1(root->r, ans);

    int maxn = (max(root->data, root->data + a1 + a2), max(root->data + a1, root->data + a2));
    ans = max(ans, maxn);
    return max(root->data, max(root->data + a1, root->data + a2));
}
int maxpath(node *root)
{
    int ans = INT_MIN;
    max1(root, ans);
    return ans;
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

    cout << maxpath(root);
}