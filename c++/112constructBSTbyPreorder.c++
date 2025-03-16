#include <iostream>
#include<climits>
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
void inorder(Node *root)
{
    if (root == NULL)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
Node *build(int arr[], int* indx, int key, int min, int max, int n)
{
    if(*indx>=n)
    return NULL;
    Node *root = NULL;
    if (key > min && key < max)
    {
        root = new Node(key);
        *indx += 1;
        if (*indx < n)
        {
            root->left = build(arr, indx, arr[*indx], min, key, n);
        }
        if(*indx<n){
            root->right = build(arr, indx, arr[*indx], key, max, n);
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
    int indx=0;
    Node *root=build(arr,&indx,arr[0],INT_MIN, INT_MAX, n);
    inorder(root);
}