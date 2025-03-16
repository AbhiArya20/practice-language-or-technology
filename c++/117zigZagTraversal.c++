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
void zigzag(Node *root)
{

    if (root == NULL)
        return;
    stack<Node *> cur;
    stack<Node *> nex;
    cur.push(root);
    bool check = true;
    while (!cur.empty())
    {
        Node *node = cur.top();
        cur.pop();
        if (node != NULL)
        {
            cout << node->data << " ";
            if (check)
            {
                if (node->left)
                    nex.push(node->left);

                if (node->right)
                    nex.push(node->right);
            }
            else
            {
                if (node->right)
                    nex.push(node->right);

                if (node->left)
                    nex.push(node->left);
            }

            if(cur.empty()){
                check= !check;
                swap(cur,nex);
            }
        }
    }
}
int main()
{
    Node *root = new Node(12);
    root->left = new Node(9);
    root->right = new Node(15);
    root->left->left=new Node(5);
    root->left->right = new Node(10);

    Node* root1= new Node(1);
    root1->left=new Node(2);
    root1->right= new Node(3);
    root1->left->right=new Node(4);
    root1->left->right->left=new Node(6);
    root1->left->right->right=new Node(7);
    root1->right->right= new Node(5);
    zigzag(root1);
}