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
class Information
{
public:
    int maxi;
    int mini;
    int size;
    int ans;
    bool isBST;
};
 
Information largestBST(Node *root)
{
    if (root == NULL)
        return {INT_MIN, INT_MAX, 0, 0, true};
    if (root->left==NULL && root->right==NULL)
        return {root->data, root->data, 1, 1, true};

    Information leftINfo = largestBST(root->left);
    Information rightINfo = largestBST(root->right);

    Information cur;
    cur.size = 1 + leftINfo.size + rightINfo.size;
    if (leftINfo.isBST && rightINfo.isBST && leftINfo.maxi < root->data && rightINfo.mini > root->data)
    {
        cur.mini = min(leftINfo.mini, min(rightINfo.mini,root->data));
        cur.maxi = max(leftINfo.maxi,max(rightINfo.maxi,root->data));
        cur.ans = cur.size;
        cur.isBST=true;
        return cur;
    }
    cur.ans = max(leftINfo.ans, rightINfo.ans);
    cur.isBST = false;
    return cur;
}
int main()
{
    Node *root1 = new Node(15);
    root1->left = new Node(20);
    root1->right = new Node(30);
    root1->left->left = new Node(5);

    Information info = largestBST(root1);
    cout << info.ans;
}