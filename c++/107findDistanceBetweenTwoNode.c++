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
Node *LCA2(Node *root, int A, int B)
{
    if (root == NULL)
        return NULL;
    if (root->data == A || root->data == B)
        return root;
    Node *L = LCA2(root->left, A, B);
    Node *R = LCA2(root->right, A, B);

    if (L && R)
        return root;
    if (L != NULL)
        return L;

    return R;
}
bool getPath(Node *root, int key, vector<int> &path)
{
    if (root == NULL)
        return false;

    path.push_back(root->data);
    if (root->data == key)
        return true;
    if (getPath(root->left, key, path) || getPath(root->right, key, path))
        return true;

    path.pop_back();
    return false;
}
int LCA(Node *root, int A, int B)
{
    vector<int> pathA, pathB;
    if (!getPath(root, A, pathA) || !getPath(root, B, pathB))
        return -1;
    int i = 0;
    for (i = 0; i < pathA.size() && pathB.size(); i++)
    {
        if (pathA[i] != pathB[i])
            break;
    }
    return ((pathA.size() - i) + (pathB.size() - i));
}

int height(Node *root, int key, int distance)
{
    if (root == NULL)
        return -1;
    if (root->data == key)
        return distance;

    int L = height(root->left, key, distance + 1);
    if (L != -1)
        return L;
    int R = height(root->right, key, distance + 1);
    if (R != -1)
        return R;
}
int distance(Node *root, int A, int B)
{
    if (root == NULL)
        return 0;

    Node *LCA = LCA2(root, A, B);
    int L = height(LCA, A,0);
    int R = height(LCA, B,0);
    return (L + R);
}
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->left = new Node(5);
    root->right->right = new Node(6);
    // root->right->left->left = new Node(7);

    cout << distance(root, 4, 6);
} 
