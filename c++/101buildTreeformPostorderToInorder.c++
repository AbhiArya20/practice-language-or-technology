#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data= val;
        left=NULL;
        right=NULL;
    }
};
int search(int in[], int st, int en, int key){
    for (int i = st; i <= en; i++)
    {
        if(in[i]==key)
        return i;
    }
    return -1;
}
Node* build(int post[], int in[], int st, int en){
    static int idx=4; 
    if(st>en)
    return NULL;
    int cur= post[idx];
    idx--;
    Node * root= new Node(cur);
    if(st==en)
    return root;
    int pos=search(in, st, en, cur);
    root->right= build (post, in, pos+1, en);
    root->left=build(post, in, st, pos-1);
    return root;
}
void inorder(Node *root)
{
    if (root == NULL)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
int main(){
    int n;
    cin>> n;

    int post[n];
    int in[n];
    for (int i = 0; i < n; i++)
    {
        cin>> post[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        cin>> in[i];
    }
    
 Node* root= build(post, in, 0, n-1);
 inorder(root);   
}