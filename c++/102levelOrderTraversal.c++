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
int height(Node *root)
{
    if (root == NULL)
        return 0;
    return max(height(root->left), height(root->right)) + 1;
}

int diameter(Node *root)
{
    if (root == NULL)
        return 0;

    return max(height(root->left) + height(root->right) + 1, max(diameter(root->right), diameter(root->left)));
}

int diameter1(Node *root, int *height)
{
    if (root == NULL)
    {
        *height = 0;
        return 0;
    }
    int l = 0, r = 0;
    *height = max(l, r) + 1;
    return max(l + r + 1, max(diameter1(root->left, &l), diameter1(root->right, &r)));
}
int rec(Node *root)
{
    if (root == NULL)
        return 0;

    return (1 + rec(root->left) + rec(root->right));
}
int recsum(Node *root)
{
    if (root == NULL)
        return 0;

    return (root->data + recsum(root->left) + recsum(root->right));
}
void levelOrder(Node *root)
{
    if (root == NULL)
        return;
    queue<Node *> st;
    st.push(root);
    st.push(NULL);
    while (!st.empty())
    {
        Node *node = st.front();
        st.pop();
        if (node != NULL)
        {
            cout << node->data << " ";

            if (node->left)
                st.push(node->left);

            if (node->right)
                st.push(node->right);
        }
        else if (!st.empty())
        {
            st.push(NULL);
        }
    }
}
int main()
{

    Node *root = new Node(1);
    root->left = new Node(2);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right = new Node(3);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    levelOrder(root);
}