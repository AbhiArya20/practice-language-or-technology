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

bool check(node *root, node *mini = NULL, node *maxi = NULL)
{
    if (root == NULL)
        return true;
    if (mini != NULL && root->data <= mini->data)
        return false;
    if (maxi != NULL && root->data >= maxi->data)
        return false;

    bool left = check(root->l, mini, root);
    bool right = check(root->r, root, maxi);
    return (left && right);
}
int main()
{
    node *root = new node(2);
    root->l = new node(1);
    root->r = new node(3);

    if (check(root, NULL, NULL))
        cout << "true";
    else
        cout << "false";
}