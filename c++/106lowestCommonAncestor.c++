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
    int pathChange;
    for (pathChange = 0; pathChange < pathA.size() && pathB.size(); pathChange++)
    {
        if (pathA[pathChange] != pathB[pathChange])
            return pathA[pathChange - 1];
    }
} 
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->left = new Node(5);
    root->right->right = new Node(6);
    root->right->left->left = new Node(7);

    cout << LCA(root, 6, 7);
}