#include <iostream>
#include <climits>
using namespace std;
class Node
{
public:
    int data;
    Node *left, *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
bool build(Node *root, Node *min = NULL, Node *max = NULL)
{
    if (root == NULL)
        return true;
    if (min != NULL && root->data <= min->data)
        return false;
    if (max != NULL && root->data >= max->data)
        return false;

    bool maxL = build(root->left, min, root);
    bool maxR = build(root->right, root, max);

    return (maxR && maxL);
}
int main()
{
    Node *root = new Node(2);
    root->left = new Node(1);
    // root->left->left = new Node(1);
    root->right = new Node(3);
    // root->right->left = new Node(5);
    // root->right->right = new Node(8);
    cout << build(root, NULL, NULL);
}