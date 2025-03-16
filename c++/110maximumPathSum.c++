#include <iostream>
#include <climits>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
int maxpath(node *root, int &ans)
{
    if (root == NULL)
    {
        return -1;
    }
    int l = maxpath(root->left, ans);
    int r = maxpath(root->right, ans);

    int maximum = max(max(root->data, l + r + root->data), max(l + root->data, r + root->data));
    ans = max(ans, maximum);
    return max(root->data, max(l + root->data, r + root->data));
}

int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);

    int ans = INT_MIN;
    maxpath(root, ans);
    cout << ans;
    return 0;
}