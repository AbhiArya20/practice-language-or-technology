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
node *buildBST(node *root, int val)
{

    if (root == NULL)
    {
        return new node(val);
    }
    if (root->data < val)
        root->right = buildBST(root->right, val);
    else
        root->left = buildBST(root->left, val);
    return root;
}
void inorder(node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
node *search(node *root, int key)
{
    if (root == NULL)
        return NULL;

    if (root->data == key)
        return root;
    if (root->data > key)
    {
        return search(root->left, key);
    }
    return search(root->right, key);
}
node* inorderSucc(node* root){
    node* cur= root;
    while (cur&& cur->left!=NULL){
        cur= cur->left;
    }
        return cur;
}
node *deletetion(node *root, int key)
{
    if (root->data < key)
    {
        root->right = deletetion(root->right, key);
    }
    else if (root->data > key)
    {
        root->left = deletetion(root->left, key);
    }
    else
    {
        if (root->left == NULL)
        {
            node *temp = root->right;
            free(root);
            return temp;
        }

        else if (root->right == NULL)
        {
            node *temp = root->left;
            free(root);
            return temp;
        }
        else
        { 
            node* temp = inorderSucc(root->right);
            root->data= temp->data;
            root->right= deletetion(root->right, temp->data);
        }
    }
    return root;
}
int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    node *root = NULL;
    root = buildBST(root, arr[0]);
    for (int i = 1; i < n; i++)
    {
        buildBST(root, arr[i]);
    }
    
    inorder(root);
    cout<<endl;
   root= deletetion(root,5);
    inorder(root);
}