#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
int search(int in[], int st, int en, int key)
{
    for (int i = st; i <= en; i++)
    {
        if (in[i] == key)
            return i;
    }

    return -1;
}
Node *creat(int pre[], int in[], int st, int en)
{
    static int idx = 0;
    if (st > en)
        return NULL;
    int cur = pre[idx];
    idx++;
    Node *node = new Node(cur);
    if (st == en)
        return node;
    int pos = search(in, st, en, cur);
    node->left = creat(pre, in, st, pos - 1);
    node->right = creat(pre, in, pos + 1, en);

    return node;
}
void inorder(Node *root)
{
    if (root == NULL)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
int main()
{

    int n;
    cin >> n;
    int pre[n], in[n];
    for (int i = 0; i < n; i++)
    {
        cin >> pre[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> in[i];
    }

    Node *root = creat(pre, in, 0, n - 1);
    inorder(root);
}