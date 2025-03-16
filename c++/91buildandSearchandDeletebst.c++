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
node *build(node *root, int val)
{
    if (root == NULL)
        return new node(val);

    {
        if (root->data > val)
            root->l = build(root->l, val);
        if (root->data < val)
            root->r = build(root->r, val);
    }
    return root;
}
void inordert(struct node *root)
{
    if (root == NULL)
        return;
    inordert(root->l);
    cout << root->data << " ";
    inordert(root->r);
}
node *search(node *root, int key)
{
    if (root == NULL)
        return NULL;

    if (root->data == key)
        return root;

    if (key > root->data)
        return search(root->r, key);

    return search(root->l, key);
}

node *inorder(node *root)
{
    node *cur = root;
    while (cur && cur->l != NULL)
    {
        cur = cur->l;
    }
    return cur;
}
node *deletenode(node *root, int val)
{

    if (val < root->data)
        root->l = deletenode(root->l, val);

    else if (val > root->data)
        root->r = deletenode(root->r, val);

    else
    {
        if (root->l == NULL)
        {
            node *temp = root->r;
            free(root);
            return temp;
        }
        if (root->r == NULL)
        {
            node *temp = root->l;
            free(root);
            return temp;
        }

        node *temp = inorder(root->r);
        root->data = temp->data;
        root->r = deletenode(root->r, temp->data);
    }
    return root;
}
int main()
{
    int arr[] = {4, 2, 5, 1, 3, 6};
    node *root = NULL;
    root = build(root, arr[0]);
    for (int i = 1; i < 6; i++)
    {
        build(root, arr[i]);
    }

    // if (search(root, 7))
    //     cout << "exist"<<endl;
    // else
    //     cout << "Not exist"<<endl;

    inordert(root);
    root = deletenode(root, 2);
    cout << endl;
    inordert(root);
}