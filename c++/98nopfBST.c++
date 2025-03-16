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

vector<node *> BSTs(int s, int e)
{
    vector<node *> trees;
    if (s > e)
    {
        trees.push_back(NULL);
        return trees;
    }
    for (int i = s; i <= e; i++)
    {
        vector<node *> left = BSTs(s, i - 1);
        vector<node *> right = BSTs(i + 1, e);
        for (int j = 0; j < left.size(); j++)
        {
            node *temp = left[j];
            for (int k = 0; k < right.size(); k++)
            {
                node *temp2 = right[k];
                node *node1 = new node(i);
                node1->l = temp;
                node1->r = temp2;
                trees.push_back(node1);
            }
        }
    }
    return trees;
}
void preorder(node *root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    preorder(root->l);
    preorder(root->r);
}
int main()
{
    
    vector<node *> root = BSTs(1, 3);
    for (int i = 0; i < root.size(); i++)
    {
        cout << (i + 1) << " : ";
        preorder(root[i]);
        cout << endl;
    }

    return 0;
}