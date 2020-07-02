#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
};
Node* newNode(int x)
{
    Node* ptr = (Node*)malloc(sizeof(Node*));
    ptr->data =x;
    ptr->left = NULL;
    ptr->right = NULL;
    return ptr;
}
void preorder(Node* root)
{
    if(!root)
    return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
Node* bst(int arr[],int l,int r)
{
    if(l>r)
    return NULL;
    int mid=(l+r)/2;
    Node* temp=newNode(arr[mid]);
    temp->left=bst(arr,l,mid-1);
    temp->right=bst(arr,mid+1,r);
    return temp;
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i =0;i<n;i++)
        cin>>a[i];
        Node* root = bst(a,0,n-1);
        preorder(root);
        cout<<endl;
    }
}
