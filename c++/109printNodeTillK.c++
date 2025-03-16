#include <iostream>
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
void print2(node *root, int k)
{
    if (root == NULL || k < 0)
        return;
    if (k == 0)
    {
        cout << root->data << " ";
        return;
    }
    print2(root->left, k - 1);
    print2(root->right, k - 1);
}
int print(node *root, node *target, int k)
{
    if (root == NULL)
        return -1;
    if (root == target)
    {
        print2(root, k);
        return 0;
    }
    int Ld = print(root->left, target, k);
    if (Ld != -1)
    {
        if (Ld + 1 == k)
            cout << root->data << " ";
        else
            print2(root->right, k - Ld - 2);

        return Ld + 1;
    }

    int Rd = print(root->right, target, k);
    if (Rd != -1)
    {
        if (Rd + 1 == k)
            cout << root->data << " ";
        else
            print2(root->left, k - Rd - 2);

        return Rd + 1;
    }
}
int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);

    print(root, root->left, 1);
    return 0;
}