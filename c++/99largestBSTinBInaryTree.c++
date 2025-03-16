#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *left, *right;
    node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

struct info
{
    int mini;
    int maxi;
    int size;
    int ans;
    bool isbst;
};

info largest(node *root)
{
    if (root == NULL)
    {
        return {INT_MAX, INT_MIN, 0, 0, true};
    }
    if (root->left == NULL && root->right == NULL)
        return {root->data, root->data, 1, 1, true};

    info left = largest(root->left);
    info right = largest(root->right);

    info cur;
    cur.size = (left.size + right.size + 1);
    if (left.isbst && right.isbst && root->data > left.maxi && right.mini > root->data)
    {
        cur.mini = min(left.mini, min(right.mini, root->data));
        cur.maxi = max(right.maxi, max(left.maxi, root->data));
        cur.ans = cur.size;
        cur.isbst = true;
         return cur;
    }
    cur.ans = max(left.ans, right.ans);
    cur.isbst = false;

    return cur;
}
int main()
{
    node *root = new node(15);
    root->left = new node(20);
    root->right = new node(30);
    root->left->left = new node(5);
    info in = largest(root);
    cout << in.ans;

    return 0;
}